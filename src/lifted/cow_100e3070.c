/* f_0x100e3070 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100e3070(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(COW_IMG(0x103601bcu)) == 0u)
    {
        ecx = rd32(COW_IMG(0x103601bcu));
        eax = in_eax;
        edx = in_edx;
        loc_4 = 0u;
    }
    else
    {
        ecx = rd32(COW_IMG(0x103601bcu));
        t1 = rd32(ecx + 0x80u);
        g->eax = t1;
        g->ecx = ecx;
        g->edx = in_edx;
        g->esp = sp0 - 0x10u;
        t2 = cow_stdcall(g, COW_IMG(0x100db780u), 1, t1);
        t3 = g->ecx;
        t4 = g->edx;
        eax = t2;
        ecx = t3;
        edx = t4;
        loc_4 = t2;
    }
    if ((uint16_t)arg3 == 0u)
    {
        edi = 0u;
        goto L_100e3128;
    }
    ebx = 0u;
    edi = 0u;
L_100e30a3: ;
    if ((int16_t)ebx >= 300) goto L_100e3128;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t5 = cow_call_regs(g, COW_IMG(0x100e6320u), eax, g->ecx, g->edx, 1, 1, ebx);
    t6 = g->ecx;
    t7 = g->edx;
    if (t5 == 0u)
    {
        eax = t5;
        ecx = t6;
        edx = t7;
    }
    else
    {
        ecx = t6;
        edx = t7;
        esi = t5;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t8 = cow_cdecl(g, COW_IMG(0x100e75f0u), 1, esi);
        t9 = g->ecx;
        t10 = g->edx;
        if ((uint8_t)t8 == 0u)
        {
            eax = t8;
            ecx = t9;
            edx = t10;
        }
        else
        {
            ecx = t9;
            edx = t10;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t11 = cow_cdecl(g, COW_IMG(0x100e76a0u), 1, esi);
            t12 = g->ecx;
            t13 = g->edx;
            if ((uint8_t)t11 == 0u)
            {
                eax = t11;
                ecx = t12;
                edx = t13;
            }
            else
            {
                ecx = t12;
                edx = t13;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t14 = cow_cdecl(g, COW_IMG(0x100e7810u), 1, esi);
                t15 = g->ecx;
                t16 = g->edx;
                if ((uint8_t)t14 == 0u)
                {
                    eax = t14;
                    ecx = t15;
                    edx = t16;
                }
                else
                {
                    ecx = t15;
                    edx = t16;
                    g->ecx = ecx;
                    g->edx = edx;
                    g->esp = sp0 - 0x10u;
                    t17 = cow_cdecl(g, COW_IMG(0x100e7870u), 1, esi);
                    t18 = g->ecx;
                    t19 = g->edx;
                    if ((uint8_t)t17 == 0u)
                    {
                        eax = t17;
                        ecx = t18;
                        edx = t19;
                    }
                    else
                    {
                        ecx = t18;
                        edx = t19;
                        g->edx = edx;
                        g->esp = sp0 - 0x10u;
                        t20 = cow_cdecl(g, COW_IMG(0x100e78a0u), 1, esi);
                        t21 = g->edx;
                        if ((uint16_t)t20 != loc_4)
                        {
                            eax = (uint16_t)t20;
                            ecx = loc_4;
                            edx = t21;
                        }
                        else
                        {
                            ecx = loc_4;
                            edx = t21;
                            g->esp = sp0 - 0x10u;
                            t22 = cow_cdecl(g, COW_IMG(0x100e78d0u), 1, esi);
                            wr32(arg2 + (uint16_t)edi * 4u, t22);
                            eax = t22;
                            ecx = (uint16_t)edi;
                            edx = arg2;
                            edi = edi + 1u;
                        }
                    }
                }
            }
        }
    }
    if ((uint16_t)edi < (uint16_t)arg3)
    {
        ebx = ebx + 1u;
        goto L_100e30a3;
    }
L_100e3128: ;
    return (eax & 0xffff0000u) | (uint16_t)edi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e3070(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e3070(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
