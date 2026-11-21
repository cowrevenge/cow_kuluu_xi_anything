/* f_0x1000ef30 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 3

   parses a value from the object string at [this] and writes it to the registry using one of three type handlers.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1000ef30(Guest* g, uint32_t self, uint32_t arg0, uint32_t arg1, uint32_t arg2)
{
    const uint32_t sp0 = g->esp;

    const uint32_t saved_ebx = g->ebx;
    const uint32_t saved_esi = g->esi;
    const uint32_t saved_edi = g->edi;
    const uint32_t saved_ebp = g->ebp;

    const uint32_t local_2010 = cow_frame(g, sp0, 0x2014u); /* [ebp - 0x2010] */
    const uint32_t local_1010 = cow_frame(g, sp0, 0x1014u); /* [ebp - 0x1010] */

    uint32_t esi = self;
    uint32_t ebx = local_2010;
    uint32_t edi;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t val;

    g->eax = 0x2010u;
    cow_cdecl(g, COW_IMG(0x10312190u), 0);

    eax = rd32(esi);
    ecx = rd8(eax);
    cow_stdcall(g, COW_IMG(0x1000eee0u), 1, ecx);
    eax = g->eax;

    while (eax != 0) {
        edx = rd32(esi);
        cow_stdcall(g, rd32(COW_IMG(0x10329370u)), 1, edx);
        eax = g->eax;
        wr32(esi, eax);

        ecx = rd8(eax);
        cow_stdcall(g, COW_IMG(0x1000eee0u), 1, ecx);
        eax = g->eax;
    }

    edi = rd32(esi);
    eax = rd8(edi);

    if ((eax & 0xffu) == 0) {
        g->ebx = saved_ebx;
        g->esi = saved_esi;
        g->edi = saved_edi;
        g->ebp = saved_ebp;
        return 0x80020009u;
    }

    if ((eax & 0xffu) != 0x27u) {
        for (;;) {
            ecx = rd8(edi);
            cow_stdcall(g, COW_IMG(0x1000eee0u), 1, ecx);
            if (g->eax != 0)
                break;

            cow_stdcall(g, rd32(COW_IMG(0x10329370u)), 1, edi);
            eax = g->eax;
            wr32(esi, eax);

            if (edi < eax) {
                ecx = edi;
                while (ecx < eax) {
                    val = rd8(ecx);
                    wr8(ebx, val);
                    ebx++;
                    ecx++;
                }
            }

            edi = eax;
            if (rd8(edi) == 0)
                break;
        }

        wr8(ebx, 0);
        ebx++;
    } else {
        cow_stdcall(g, rd32(COW_IMG(0x10329370u)), 1, edi);
        eax = g->eax;
        wr32(esi, eax);

        if (rd8(eax) != 0) {
            for (;;) {
                cow_cdecl(g, COW_IMG(0x1000eec0u), 1, esi);
                if (g->eax != 0)
                    break;

                eax = rd32(esi);
                if (rd8(eax) == 0x27u) {
                    cow_stdcall(g, rd32(COW_IMG(0x10329370u)), 1, eax);
                    eax = g->eax;
                    wr32(esi, eax);
                }

                edi = rd32(esi);
                cow_stdcall(g, rd32(COW_IMG(0x10329370u)), 1, edi);
                eax = g->eax;
                wr32(esi, eax);

                if ((ebx + 2u) >= local_1010) {
                    g->ebx = saved_ebx;
                    g->esi = saved_esi;
                    g->edi = saved_edi;
                    g->ebp = saved_ebp;
                    return 0x80020009u;
                }

                if (edi < eax) {
                    ecx = edi;
                    while (ecx < eax) {
                        val = rd8(ecx);
                        wr8(ebx, val);
                        ebx++;
                        ecx++;
                    }
                }

                if (rd8(eax) == 0)
                    break;
            }
        }

        eax = rd32(esi);
        if (rd8(eax) == 0) {
            g->ebx = saved_ebx;
            g->esi = saved_esi;
            g->edi = saved_edi;
            g->ebp = saved_ebp;
            return 0x80020009u;
        }

        wr8(ebx, 0);
        ebx++;

        cow_stdcall(g, rd32(COW_IMG(0x10329370u)), 1, eax);
        eax = g->eax;
        wr32(esi, eax);
    }

    val = rd8(COW_IMG(0x109f8200u));
    if ((val & 1u) == 0) {
        wr8(COW_IMG(0x109f8200u), val | 1u);
        wr16(COW_IMG(0x10456778u), 8u);
        wr32(COW_IMG(0x10456774u), rd32(COW_IMG(0x10329ab8u)));
        wr32(COW_IMG(0x1045677cu), rd32(COW_IMG(0x10329abcu)));
        wr16(COW_IMG(0x10456780u), 0x13u);
        wr32(COW_IMG(0x10456784u), rd32(COW_IMG(0x10329ac0u)));
        wr16(COW_IMG(0x10456788u), 0x11u);
    }

    ebx = 0;
    for (;;) {
        cow_stdcall(g, rd32(COW_IMG(0x10329174u)), 2,
                    local_2010,
                    rd32(COW_IMG(0x10456774u) + ebx * 8u));
        if (g->eax == 0)
            break;
        ebx++;
        if (ebx >= 3) {
            g->ebx = saved_ebx;
            g->esi = saved_esi;
            g->edi = saved_edi;
            g->ebp = saved_ebp;
            return 0x80020009u;
        }
    }

    ebx = rd16(COW_IMG(0x10456778u) + ebx * 8u);

    for (;;) {
        eax = rd32(esi);
        ecx = (int32_t)(int8_t)rd8(eax);
        ecx -= 9;
        if (ecx >= 0 && ecx <= 0x17) {
            uint32_t idx = COW_IMG(0x1000f2c0u) + (uint32_t)ecx;
            uint32_t off = rd8(idx);
            if (off != 0) {
                cow_stdcall(g, rd32(COW_IMG(0x10329370u)), 1, eax);
                eax = g->eax;
                wr32(esi, eax);
                continue;
            }
        }
        break;
    }

    cow_thiscall(g, COW_IMG(0x1000e0f0u), esi, 1, local_1010);
    eax = g->eax;
    if ((int32_t)eax < 0) {
        g->ebx = saved_ebx;
        g->esi = saved_esi;
        g->edi = saved_edi;
        g->ebp = saved_ebp;
        return eax;
    }

    ebx &= 0xffffu;
    eax = ebx - 8u;

    if (eax == 0) {
        cow_stdcall(g, rd32(COW_IMG(0x10329148u)), 1, local_2010);
        edi = g->eax + 1u;
        cow_stdcall(g, rd32(COW_IMG(0x10329018u)), 6,
                    rd32(arg0), arg1, 0, 1, local_2010, edi);
    } else {
        eax -= 9u;
        if (eax == 0) {
            cow_stdcall(g, rd32(COW_IMG(0x10329148u)), 1, local_2010);
            eax = g->eax;
            if (eax & 1u) {
                g->ebx = saved_ebx;
                g->esi = saved_esi;
                g->edi = saved_edi;
                g->ebp = saved_ebp;
                return 0x80004005u;
            }

            edx = (uint32_t)((int32_t)eax >> 31);
            uint32_t half = (uint32_t)(((int32_t)eax - (int32_t)edx) >> 1);
            uint32_t alloc = half + 3u;
            alloc &= 0xfffffffcu;

            g->eax = alloc;
            cow_cdecl(g, COW_IMG(0x10312190u), 0);

            uint32_t zero = g->esp;
            uint32_t cnt = half;
            while (cnt >= 4u) {
                wr32(zero, 0);
                zero += 4u;
                cnt -= 4u;
            }
            while (cnt != 0) {
                wr8(zero, 0);
                zero++;
                cnt--;
            }

            if (g->esp == 0) {
                g->ebx = saved_ebx;
                g->esi = saved_esi;
                g->edi = saved_edi;
                g->ebp = saved_ebp;
                return 0x80004005u;
            }

            uint32_t i = 0;
            while ((int32_t)i < (int32_t)eax) {
                val = rd8(local_2010 + i);
                uint32_t digit = 0;

                if (val >= '0' && val <= '9')
                    digit = val - '0';
                else if (val >= 'A' && val <= 'F')
                    digit = val - 'A' + 10;
                else if (val >= 'a' && val <= 'f')
                    digit = val - 'a' + 10;

                uint32_t dst = g->esp + (i >> 1);
                uint32_t shift = ((i & 1u) == 0) ? 4u : 0u;
                val = rd8(dst) | (digit << shift);
                wr8(dst, val);
                i++;
            }

            cow_stdcall(g, rd32(COW_IMG(0x10329018u)), 6,
                        rd32(arg0), arg1, 0, 3, g->esp, half);
        } else {
            eax -= 2u;
            if (eax == 0) {
                cow_stdcall(g, rd32(COW_IMG(0x10329148u)), 1, local_2010);
                edi = g->eax + 1u;
                uint32_t alloc = (edi + edi) + 3u;
                alloc &= 0xfffffffcu;

                g->eax = alloc;
                cow_cdecl(g, COW_IMG(0x10312190u), 0);

                ebx = g->esp;
                wr16(ebx, 0);

                cow_stdcall(g, rd32(COW_IMG(0x10329144u)), 6,
                            0, 0, local_2010, 0xffffffffu, ebx, edi);

                cow_stdcall(g, rd32(COW_IMG(0x10329308u)), 4,
                            ebx, 0, 0, ebx - 8u);

                cow_stdcall(g, rd32(COW_IMG(0x10329018u)), 6,
                            rd32(arg0), arg1, 0, 4, ebx - 8u, 4);
            } else {
                cow_thiscall(g, COW_IMG(0x1000e0f0u), esi, 1, arg2);
                eax = g->eax;
                ecx = (int32_t)eax >= 0 ? 1u : 0u;
                ecx--;
                eax &= ecx;

                g->ebx = saved_ebx;
                g->esi = saved_esi;
                g->edi = saved_edi;
                g->ebp = saved_ebp;
                return eax;
            }
        }
    }

    cow_thiscall(g, COW_IMG(0x1000e0f0u), esi, 1, arg2);
    eax = g->eax;
    ecx = (int32_t)eax >= 0 ? 1u : 0u;
    ecx--;
    eax &= ecx;

    g->ebx = saved_ebx;
    g->esi = saved_esi;
    g->edi = saved_edi;
    g->ebp = saved_ebp;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1000ef30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t a0 = rd32(sp0 + 4u);
    const uint32_t a1 = rd32(sp0 + 8u);
    const uint32_t a2 = rd32(sp0 + 0xcu);
    const uint32_t result = cow_fn_1000ef30(g, g->ecx, a0, a1, a2);
    g->esp = sp0;
    rt_return(g, result, 12u);
}
/* COW_ADAPTER END */
