/* f_0x100f5f70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100f5f70(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 540u);

    wr32(sp0 - 0x1f8u, in_ebx);
    wr32(sp0 - 0x1fcu, in_ebp);
    wr32(sp0 - 0x200u, in_esi);
    wr32(sp0 - 0x204u, in_edi);
    wr32(sp0 - 0x208u, self + 8u);
    wr32(sp0 - 0x20cu, sp0 - 0x1f4u);
    wr32(sp0 - 0x210u, arg1);
    g->esp = sp0 - 0x204u;
    t1 = cow_thiscall(g, COW_IMG(0x100f42d0u), self, 3, arg1, sp0 - 0x1f4u, self + 8u);
    t2 = g->ecx;
    if (t1 != 0x18u)
    {
        eax = t1;
        goto L_100f621c;
    }
    ecx = t2;
L_100f5f9f: ;
    t3 = rd32(sp0 - 0x1f4u);
    wr32(sp0 - 0x208u, t3);
    wr32(sp0 - 0x20cu, sp0 - 0x1d0u);
    g->eax = sp0 - 0x1d0u;
    g->esp = sp0 - 0x204u;
    t4 = cow_cdecl(g, COW_IMG(0x1031046fu), 2, sp0 - 0x1d0u, t3);
    if (t4 != 0u) goto L_100f61cc;
    t5 = rd32(sp0 - 0x192u);
    wr16(self + 0xc8u, (uint16_t)(rd16(self + 0xc8u) + 1u));
    if ((t5 & 0xf80u) == 0xf00u)
    {
        wr16(self + 0xcau, (uint16_t)(rd16(self + 0xcau) + 1u));
    }
    if (rd32(self + 0x1054u) == 0u) goto L_100f61cc;
    if (rd32(self + 0x18u) != 0u)
    {
        eax = rd32(self + 0x18u);
        ecx = rd32(self + 0x1cu);
        goto L_100f5ff2;
    }
    eax = rd32(self + 0x18u);
    ecx = rd32(self + 0x1cu);
    if (ecx == 0u) goto L_100f6023;
L_100f5ff2: ;
    if (rd32(sp0 - 0x1d0u) != eax) goto L_100f61cc;
    if (rd32(sp0 - 0x1ccu) != ecx) goto L_100f61cc;
    if ((int32_t)rd32(self + 0x20u) < 0) goto L_100f6023;
    eax = rd32(self + 0x20u);
    if (eax != (uint8_t)rd32(sp0 - 0x194u)) goto L_100f61cc;
L_100f6023: ;
    t6 = rd32(sp0 - 0x19cu);
    wr32(sp0 - 0x1ecu, t6);
    t7 = rd32(sp0 - 0x1a0u);
    wr32(sp0 - 0x1f0u, t7);
    wr32(sp0 - 0x208u, sp0 - 0x188u);
    t8 = (uint8_t)rd32(sp0 - 0x193u);
    wr32(sp0 - 0x20cu, t8);
    wr32(sp0 - 0x1e8u, sp0 - 0x1c0u);
    wr8(self + 0x68u, 0u);
    g->eax = t8;
    g->ecx = sp0 - 0x1c0u;
    g->edx = sp0 - 0x188u;
    g->esp = sp0 - 0x204u;
    t9 = cow_cdecl(g, COW_IMG(0x1030ffb5u), 2, t8, sp0 - 0x188u);
    t10 = g->ecx;
    t11 = g->edx;
    if ((int32_t)t9 < 0)
    {
        eax = t9;
        ecx = t10;
    }
    else
    {
        edx = t11;
        if (!(rd32(sp0 - 0x188u) & 1u))
        {
            eax = rd32(sp0 - 0x188u) & 1u;
            ecx = 0u;
        }
        else
        {
            eax = rd32(sp0 - 0x188u) & 1u;
            wr32(sp0 - 0x208u, 0x10u);
            wr32(sp0 - 0x20cu, sp0 - 0x180u);
            wr32(sp0 - 0x210u, self + 0x68u);
            g->eax = eax;
            g->ecx = sp0 - 0x180u;
            g->esp = sp0 - 0x200u;
            t12 = cow_cdecl(g, COW_IMG(0x100f3010u), 4, self + 0x68u, sp0 - 0x180u, 0x10u, rd32(sp0 - 0x204u));
            t13 = g->ecx;
            eax = t12;
            ecx = t13;
        }
    }
    wr32(sp0 - 0x1e4u, self + 0x68u);
    ebp = 0u;
L_100f6081: ;
    wr32(sp0 - 0x208u, sp0 - 0x160u);
    wr32(sp0 - 0x20cu, ebp);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = sp0 - 0x160u;
    g->esp = sp0 - 0x204u;
    t14 = cow_cdecl(g, COW_IMG(0x1030ff89u), 2, ebp, sp0 - 0x160u);
    t15 = g->ecx;
    t16 = g->edx;
    if (t14 != 0u)
    {
        eax = t14;
        ecx = t15;
        edx = t16;
    }
    else
    {
        edx = t16;
        if (!(rd32(sp0 - 0xc8u) & 1u))
        {
            eax = rd32(sp0 - 0xc8u) & 1u;
            ecx = 0u;
        }
        else
        {
            if (rd32(sp0 - 0x1d0u) != rd32(sp0 - 0x160u))
            {
                eax = rd32(sp0 - 0x1d0u);
                ecx = rd32(sp0 - 0x160u);
            }
            else
            {
                if (rd32(sp0 - 0x1ccu) != rd32(sp0 - 0x15cu))
                {
                    eax = rd32(sp0 - 0x15cu);
                    ecx = rd32(sp0 - 0x1ccu);
                }
                else
                {
                    if ((uint8_t)rd32(sp0 - 0x194u) != (rd32(sp0 - 0xc4u) >> 0xdu & 0x3fu))
                    {
                        eax = (uint8_t)rd32(sp0 - 0x194u);
                        ecx = rd32(sp0 - 0xc4u) >> 0xdu & 0x3fu;
                        edx = (uint32_t)((int32_t)(uint8_t)rd32(sp0 - 0x194u) >> 0x1fu);
                    }
                    else
                    {
                        eax = (uint8_t)rd32(sp0 - 0x194u);
                        ecx = rd32(sp0 - 0xc4u) >> 0xdu & 0x3fu;
                        edx = (uint32_t)((int32_t)(uint8_t)rd32(sp0 - 0x194u) >> 0x1fu);
                        if (edx == 0u)
                        {
                            wr32(sp0 - 0x208u, 0x10u);
                            wr32(sp0 - 0x20cu, sp0 - 0xc0u);
                            wr32(sp0 - 0x210u, self + 0x78u);
                            g->eax = eax;
                            g->ecx = ecx;
                            g->edx = sp0 - 0xc0u;
                            g->esp = sp0 - 0x200u;
                            t17 = cow_cdecl(g, COW_IMG(0x100f3010u), 4, self + 0x78u, sp0 - 0xc0u, 0x10u, rd32(sp0 - 0x204u));
                            t18 = g->ecx;
                            t19 = g->edx;
                            wr32(sp0 - 0x1e8u, self + 0x78u);
                            eax = t17;
                            ecx = t18;
                            edx = t19;
                        }
                    }
                }
            }
        }
    }
    if ((int32_t)(ebp + 1u) < 100)
    {
        ebp = ebp + 1u;
        goto L_100f6081;
    }
    ebp = 0u;
L_100f610b: ;
    wr32(sp0 - 0x208u, sp0 - 0xb0u);
    wr32(sp0 - 0x20cu, ebp);
    g->eax = sp0 - 0xb0u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x204u;
    t20 = cow_cdecl(g, COW_IMG(0x1030ff73u), 2, ebp, sp0 - 0xb0u);
    t21 = g->ecx;
    t22 = g->edx;
    if (t20 != 0u)
    {
        ecx = t21;
        edx = t22;
    }
    else
    {
        edx = t22;
        if (!(rd32(sp0 - 0x18u) & 1u))
        {
            ecx = 0u;
        }
        else
        {
            if (rd32(sp0 - 0x1d0u) != rd32(sp0 - 0xb0u))
            {
                ecx = rd32(sp0 - 0x1d0u);
            }
            else
            {
                ecx = rd32(sp0 - 0x1d0u);
                if (rd32(sp0 - 0x1ccu) != rd32(sp0 - 0xacu))
                {
                    edx = rd32(sp0 - 0x1ccu);
                }
                else
                {
                    if ((uint8_t)rd32(sp0 - 0x194u) != (rd32(sp0 - 0x14u) >> 0xdu & 0x3fu))
                    {
                        ecx = rd32(sp0 - 0x14u) >> 0xdu & 0x3fu;
                        edx = (uint32_t)((int32_t)(uint8_t)rd32(sp0 - 0x194u) >> 0x1fu);
                    }
                    else
                    {
                        ecx = rd32(sp0 - 0x14u) >> 0xdu & 0x3fu;
                        edx = (uint32_t)((int32_t)(uint8_t)rd32(sp0 - 0x194u) >> 0x1fu);
                        if (edx == 0u)
                        {
                            wr32(sp0 - 0x208u, 0x10u);
                            wr32(sp0 - 0x20cu, sp0 - 0x10u);
                            wr32(sp0 - 0x210u, self + 0x78u);
                            g->ecx = ecx;
                            g->edx = edx;
                            g->esp = sp0 - 0x200u;
                            cow_cdecl(g, COW_IMG(0x100f3010u), 4, self + 0x78u, sp0 - 0x10u, 0x10u, rd32(sp0 - 0x204u));
                            t23 = g->ecx;
                            t24 = g->edx;
                            wr32(sp0 - 0x1e8u, self + 0x78u);
                            ecx = t23;
                            edx = t24;
                        }
                    }
                }
            }
        }
    }
    if ((int32_t)(ebp + 1u) < 200)
    {
        ebp = ebp + 1u;
        goto L_100f610b;
    }
    wr32(sp0 - 0x208u, sp0 - 0x1f0u);
    wr32(sp0 - 0x1d8u, sp0 - 0x1d0u);
    wr32(sp0 - 0x20cu, 0u);
    wr32(sp0 - 0x210u, 0u);
    t25 = rd32(sp0 - 0x192u) >> 7u & 0x1fu;
    wr32(sp0 - 0x214u, t25);
    t26 = rd32(self + 0x1048u);
    wr32(sp0 - 0x218u, t26);
    wr32(sp0 - 0x1e0u, 0u);
    wr32(sp0 - 0x1dcu, 0u);
    g->eax = t25;
    g->edx = sp0 - 0x1f0u;
    g->esp = sp0 - 0x204u;
    t27 = cow_thiscall_cdecl(g, rd32(self + 0x1054u), t26, 5, t26, t25, 0u, 0u, sp0 - 0x1f0u);
    t28 = g->edx;
    if ((uint8_t)t27 == 0u)
    {
        edx = t28;
        goto L_100f61fa;
    }
L_100f61cc: ;
    wr32(sp0 - 0x208u, self + 8u);
    wr32(sp0 - 0x20cu, sp0 - 0x1f4u);
    wr32(sp0 - 0x210u, arg1);
    g->esp = sp0 - 0x204u;
    t30 = cow_thiscall(g, COW_IMG(0x100f42d0u), self, 3, arg1, sp0 - 0x1f4u, self + 8u);
    t31 = g->ecx;
    if (t30 == 0x18u)
    {
        ecx = t31;
        goto L_100f5f9f;
    }
    eax = t30;
    g->ebx = rd32(sp0 - 0x1f8u);
    g->esi = rd32(sp0 - 0x200u);
    g->edi = rd32(sp0 - 0x204u);
    g->ebp = rd32(sp0 - 0x1fcu);
    return eax;
L_100f61fa: ;
    wr32(sp0 - 0x208u, 0u);
    wr32(sp0 - 0x20cu, sp0 - 0x1f4u);
    wr32(sp0 - 0x210u, 2u);
    g->esp = sp0 - 0x204u;
    t29 = cow_thiscall(g, COW_IMG(0x100f42d0u), self, 3, 2u, sp0 - 0x1f4u, 0u);
    wr8(self + 0xccu, (uint8_t)(rd8(self + 0xccu) + 1u));
    eax = 0x17u;
L_100f621c: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f5f70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100f5f70(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
