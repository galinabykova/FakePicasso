#pragma once
#include "stdint.h"
#include "NumProbes.h"

#ifdef __EXPORT_FAST_SIMULATION__
#define EXPORT_FAST_SIMULATION __declspec(dllexport)
#else
#define EXPORT_FAST_SIMULATION __declspec(dllimport)
#endif

//! ��������� ������
//! @param[in] nprobes                                   - ���������� ��������
//! @param[in] num_probe[nprobes]                        - ��������� �� ������ � �������� ��������
//! @param[in] npoints                                   - ���������� ����� ����������
//! @param[in] md[npoints]                               - ����� ����������
//! @param[in] tvd[npoints]                              - ���������� z ���������� (�������, ��� ���������� ����)
//! @param[in] x[npoints]                                - ���������� x ���������� (�����)
//! @param[in] zeni[npoints]                             - ���� ������� �������
//! @param[in] ro_by_phases[npoints, nprobes]            - ��������� ������������� �� ����� 
//! @param[in] ro_by_ampl[npoints, nprobes]              - ��������� ������������� �� ����������
//! @param[in, out] tvd_start                            - ������� ������� ������� � ����� x[0]
//! @param[in] min_tvd_start                             - ������ ������� ������� tvd_start
//! @param[in] max_tvd_start                             - ������� ������� ������� tvd_start
//! @param[in, out] alpha                                - ���� ������� ������
//! @param[in] min_alpha                                 - ������� ������� ������� ���� ������� ������
//! @param[in] max_alpha                                 - ������� ������� ������� ���� ������� ������
//! @param[in, out] ro_up                                - ������������� �������� ������
//! @param[out] min_ro_up                                - ������ ������� ������������� �������� ������
//! @param[out] max_ro_up                                - ������� ������� ������������� �������� ������
//! @param[int, out] kanisotropy_up                      - ����������� ����������� ������� ������
//! @param[out] min_kanisotropy_up                       - ������ ������� ������������ ����������� �������� ������
//! @param[out] max_kanisotropy_up                       - ������� ������� ������������ ����������� �������� ������
//! @param[in, out] ro_down                              - ������������� ������� ������
//! @param[out] min_ro_down                              - ������ ������� ������������� ������� ������
//! @param[out] max_ro_down                              - ������� ������� ������������� ������� ������
//! @param[in, out] kanisotropy_down                     - ����������� ����������� ������� ������
//! @param[out] min_kanisotropy_down                     - ������ ������� ������������ ����������� ������� ������
//! @param[out] max_kanisotropy_down                     - ������� ������� ������������ ����������� ������� ������
//! @param[out] synt_ro_by_phases[npoints, nprobes]      - ��������� ������������� �� �����, ������������ �� ����������� ������
//! @param[out] synt_ro_by_ampl[npoints, nprobes]        - ��������� ������������� �� ����������, ������������ �� ����������� ������
//! @param[out] misfit                                   - �������
extern "C" int32_t EXPORT_FAST_SIMULATION StartModelSimpleHorizontalModel6Param1_5D_ByRo(
	const uint16_t nprobes, const uint32_t num_probe[],
	const uint16_t npoints, const double md[], const double tvd[], const double x[], const double zeni[],
	const double ro_by_phases[], const double ro_by_ampl[],
	double& tvd_start, const double min_tvd_start, const double max_tvd_start,
	double& alpha, const double min_alpha, const double max_alpha,
	double& ro_up, const double min_ro_up, const double max_ro_up,
	double& kanisotropy_up, const double min_kanisotropy_up, const double max_kanisotropy_up,
	double& ro_down, const double min_ro_down, const double max_ro_down,
	double& kanisotropy_down, const double min_kanisotropy_down, const double max_kanisotropy_down,
	double synt_ro_by_phases[], double synt_ro_by_ampl[], double& misfit
);

//! ��������
//! @param[in] nprobes                                   - ���������� ��������
//! @param[in] num_probe[nprobes]                        - ��������� �� ������ � �������� ��������
//! @param[in] npoints                                   - ���������� ����� ����������
//! @param[in] md[npoints]                               - ����� ����������
//! @param[in] tvd[npoints]                              - ���������� z ���������� (�������, ��� ���������� ����)
//! @param[in] x[npoints]                                - ���������� x ���������� (�����)
//! @param[in] zeni[npoints]                             - ���� ������� �������
//! @param[in] ro_by_phases[npoints, nprobes]            - ��������� ������������� �� ����� 
//! @param[in] ro_by_ampl[npoints, nprobes]              - ��������� ������������� �� ����������
//! @param[in, out] tvd_start                            - ������� ������� ������� � ����� x[0]
//! @param[in] min_tvd_start                             - ������ ������� ������� tvd_start
//! @param[in] max_tvd_start                             - ������� ������� ������� tvd_start
//! @param[in, out] alpha                                - ���� ������� ������
//! @param[in] min_alpha                                 - ������� ������� ������� ���� ������� ������
//! @param[in] max_alpha                                 - ������� ������� ������� ���� ������� ������
//! @param[in, out] ro_up                                - ������������� �������� ������
//! @param[out] min_ro_up                                - ������ ������� ������������� �������� ������
//! @param[out] max_ro_up                                - ������� ������� ������������� �������� ������
//! @param[in, out] kanisotropy_up                      - ����������� ����������� ������� ������
//! @param[out] min_kanisotropy_up                       - ������ ������� ������������ ����������� �������� ������
//! @param[out] max_kanisotropy_up                       - ������� ������� ������������ ����������� �������� ������
//! @param[in, out] ro_down                              - ������������� ������� ������
//! @param[out] min_ro_down                              - ������ ������� ������������� ������� ������
//! @param[out] max_ro_down                              - ������� ������� ������������� ������� ������
//! @param[in, out] kanisotropy_down                     - ����������� ����������� ������� ������
//! @param[out] min_kanisotropy_down                     - ������ ������� ������������ ����������� ������� ������
//! @param[out] max_kanisotropy_down                     - ������� ������� ������������ ����������� ������� ������
//! @param[out] synt_ro_by_phases[npoints, nprobes]      - ��������� ������������� �� �����, ������������ �� ����������� ������
//! @param[out] synt_ro_by_ampl[npoints, nprobes]        - ��������� ������������� �� ����������, ������������ �� ����������� ������
//! @param[out] misfit                                   - �������
extern "C" int32_t EXPORT_FAST_SIMULATION SolverHorizontalModel6Param1_5DByRo(
	const uint16_t nprobes, const uint32_t num_probe[],
	const uint16_t npoints, const double md[], const double tvd[], const double x[], const double zeni[],
	const double ro_by_phase[], const double ro_by_ampl[],
	double& tvd_start, const double min_tvd_start, const double max_tvd_start,
	double& alpha, const double min_alpha, const double max_alpha,
	double& ro_up, const double min_ro_up, const double max_ro_up,
	double& kanisotropy_up, const double min_kanisotropy_up, const double max_kanisotropy_up,
	double& ro_down, const double min_ro_down, const double max_ro_down,
	double& kanisotropy_down, const double min_kanisotropy_down, const double max_kanisotropy_down,
	double synt_phases[], double synt_ampl[], double& misfit
);

//! ������ ��������
//! @param[in] nprobes                                   - ���������� ��������
//! @param[in] num_probe[nprobes]                        - ��������� �� ������ � �������� ��������
//! @param[in] npoints                                   - ���������� ����� ����������
//! @param[in] tvd[npoints]                              - ���������� z ���������� (�������, ��� ���������� ����)
//! @param[in] x[npoints]                                - ���������� x ���������� (�����)
//! @param[in] zeni[npoints]                             - ���� ������� �������
//! @param[in] tvd_start                                 - ������� ������� ������� � ����� x[0]
//! @param[in] alpha                                     - ���� ������� ������
//! @param[in] ro_up                                     - ������������� �������� ������
//! @param[in] kanisotropy_up                            - ����������� ����������� ������� ������
//! @param[in, out] ro_down                              - ������������� ������� ������
//! @param[in, out] kanisotropy_down                     - ����������� ����������� ������� ������
//! @param[out] synt_ro_by_phases[npoints, nprobes]      - ��������� ������������� �� �����, ������������ �� ����������� ������
//! @param[out] synt_ro_by_ampl[npoints, nprobes]        - ��������� ������������� �� ����������, ������������ �� ����������� ������
extern "C" int32_t EXPORT_FAST_SIMULATION LoggingHorizontalModel6Param1_5DRo(
	const uint16_t nprobes, const uint32_t num_probe[],
	const uint16_t npoints, const double tvd[], const double x[], const double zeni[],
	const double tvd_start, const double alpha, const double ro_up, const double kanisotropy_up,
	const double ro_down, const double kanisotropy_down, double synt_ro_by_phases[], double synt_ro_by_ampl[]
);

//! TODO: ��������� ��� ���������� ������������� ��������
//! @param[in] nprobes       	                            - ���������� ��������
//! @param[in] num_probe[nprobes]                            - ��������� �� ������ � �������� ��������
//! @param[in] npoints                                      - ���������� ����� ����������
//! @param[in] tvd[npoints]                                 - ���������� z ���������� (�������, ��� ���������� ����)
//! @param[in] x[npoints]                                   - ���������� x ���������� (�����)
//! @param[in] zeni[npoints]                                - ���� ������� �������
//! @param[in] n_tvd_start                                  - ���������� �������� �� ����� ��� ������� ������� ������� � ����� x[0]
//! @param[in] tvd_start[n_tvd_start]                       - ��������� �� ������ � ������ ��� ������� ������� ������� � ����� x[0]
//! @param[in] n_alpha                                      - ���������� �������� �� ����� ��� ���� ������� ������
//! @param[in] alpha[n_alpha]                               - ��������� �� ������ � ������ ��� ���� ������� ������
//! @param[in] n_ro_up                                      - ���������� �������� �� ����� ��� ������������� �������� ������
//! @param[in] ro_up[n_ro_up]                               - ��������� �� ������ � ������ ��� ������������� �������� ������
//! @param[in] n_kanisotropy_up                             - ���������� �������� �� ����� ��� ������������ ����������� �������� ������
//! @param[in] kanisotropy_up[n_kanisotropy_up]             - ��������� �� ������ � ������ ��� ������������ ����������� �������� ������
//! @param[in] n_ro_down                                    - ���������� �������� �� ����� ��� ������������� ������� ������
//! @param[in] ro_down[n_ro_down]                           - ��������� �� ������ � ������ ��� ������������� ������� ������
//! @param[in] n_kanisotropy_down                           - ���������� �������� �� ����� ��� ������������ ����������� ������� ������
//! @param[in] kanisotropy_down[n_kanisotropy_down]         - ��������� �� ������ � ������ ��� ������������ ����������� ������� ������
//! @param[in] phases[nprobes]                              - ��������� �� ������ ����������������� ��������� ���
//! @param[in] ampls[nprobes]                               - ��������� �� ������ ����������������� ��������
//! @param[out] target_functions[]                          - ������� ������� ��� ��������� �������
extern "C" int32_t EXPORT_FAST_SIMULATION TargetFunctions(
	const uint16_t nprobes, const uint32_t num_probe[],
	const uint16_t npoints, const double tvd[], const double x[], const double zeni[],
	const uint16_t n_tvd_start, const double tvd_start, 
	const uint16_t n_alpha, const double alpha,
	const uint16_t n_ro_up, const double ro_up,
	const uint16_t n_kanisotropy_up, const double kanisotropy_up,
	const uint16_t n_ro_down, const double ro_down,
	const uint16_t n_kanisotropy_down, const double kanisotropy_down,
	const double ro_by_phases[], const double ro_by_ampl[],
	double target_functions[]);