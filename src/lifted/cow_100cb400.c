/* f_0x100cb400 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_100cb400(Guest* g)
{
    double d13;
    double d17;
    double d21;
    double d23;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t22;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 != 0u)
    {
        edx = in_edx;
        ebx = 0u;
        loc_c = 0u;
L_100cb423: ;
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t1 = cow_thiscall(g, COW_IMG(0x1002b5a0u), self + 0x674u, 0);
        t2 = g->edx;
        if (rd32(t1) == 0u)
        {
            edx = t2;
        }
        else
        {
            edx = t2;
            ebp = rd32(t1);
            g->edx = edx;
            g->esp = sp0 - 0x1cu;
            t3 = cow_thiscall(g, COW_IMG(0x1002b5a0u), arg1 + 0x674u, 0);
            t4 = g->edx;
            if (rd32(t3) == 0u)
            {
                edx = t4;
            }
            else
            {
                edx = t4;
                edi = rd32(t3);
                if (ebx == 0u)
                {
                    g->edx = edx;
                    g->esp = sp0 - 0x1cu;
                    t5 = cow_thiscall(g, COW_IMG(0x1001b1a0u), edi + 0x24u, 0);
                    t6 = g->edx;
                    edx = t6;
                    loc_c = t5;
                }
                g->edx = edx;
                g->esp = sp0 - 0x1cu;
                t7 = cow_thiscall(g, COW_IMG(0x1001b1a0u), ebx * 0x14u + edi + 0x24u, 0);
                t8 = g->edx;
                g->edx = t8;
                t9 = cow_thiscall(g, COW_IMG(0x1001b1a0u), ebp + ebx * 0x14u + 0x24u, 0);
                t10 = g->edx;
                if (t7 != 0u)
                {
                    eax = t9;
                    edx = t10;
                    esi = t9;
                    edi = t7;
                }
                else
                {
                    eax = t9;
                    edx = t10;
                    esi = t9;
                    edi = loc_c;
                }
                if (esi != 0u)
                {
                    if (edi != 0u)
                    {
                        g->edx = rd32(esi);
                        t11 = rd32(esi);
                        g->esp = sp0 - 0x1cu;
                        cow_thiscall(g, rd32(t11 + 0x30u), esi, 0);
                        t12 = g->edx;
                        d13 = cow_take_float(g);
                        g->eax = rd32(edi);
                        g->edx = t12;
                        t14 = rd32(edi);
                        t15 = cow_thiscall(g, rd32(t14 + 0x30u), edi, 0);
                        t16 = g->edx;
                        d17 = cow_take_float(g);
                        if ((cow_fsw(g, d17, (double)(float)d13, 0u) & 0x4100u) == 0u)
                        {
                            edx = t16;
                        }
                        else
                        {
                            eax = cow_fsw(g, d17, (double)(float)d13, 0u) & 0x4100u;
                            g->eax = eax;
                            g->edx = rd32(edi);
                            t18 = rd32(edi);
                            g->esp = sp0 - 0x1cu;
                            t19 = cow_thiscall(g, rd32(t18 + 0x30u), edi, 0);
                            t20 = g->edx;
                            d21 = cow_take_float(g);
                            if (d21 <= (double)rdf32(COW_IMG(0x103295d8u)))
                            {
                                edx = t20;
                            }
                            else
                            {
                                edx = t20;
                                g->edx = edx;
                                g->esp = sp0 - 0x1cu;
                                cow_thiscall(g, rd32(rd32(edi) + 0x30u), edi, 0);
                                t22 = g->edx;
                                d23 = cow_take_float(g);
                                wrf32(esi + 0x24u, (float)d23);
                                edx = t22;
                            }
                        }
                    }
                }
            }
        }
        if ((int32_t)(ebx + 1u) < 7)
        {
            ebx = ebx + 1u;
            goto L_100cb423;
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100cb400(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100cb400(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
