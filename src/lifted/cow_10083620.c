/* f_0x10083620 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10083620(Guest* g)
{
    double d34;
    double d37;
    double d38;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_50;
    uint32_t loc_54;
    double loc_54_f;
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
    uint32_t t32;
    uint32_t t33;
    uint32_t t35;
    uint32_t t36;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 120u);

    g->edx = in_edx;
    g->esp = sp0 - 0x54u;
    t1 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
    t2 = g->edx;
    if (t1 != 0u)
    {
        edx = t2;
        goto L_10083635;
    }
    eax = t1;
    return eax;
L_10083635: ;
    wr32(sp0 - 0x58u, in_esi);
    wr32(sp0 - 0x5cu, in_edi);
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    t3 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x40u, 0);
    t4 = g->edx;
    g->edx = t4;
    cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0x40u, 0);
    t5 = g->edx;
    t6 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
    g->edx = rd32(t6);
    t7 = rd32(t6);
    t8 = cow_thiscall(g, rd32(t7 + 0x1c0u), t6, 0);
    t9 = g->edx;
    t10 = rd32(t8 + 4u);
    wr32(sp0 - 0x60u, t10);
    g->edx = t9;
    cow_thiscall(g, COW_IMG(0x10027bd0u), sp0 - 0x40u, 1, t10);
    t11 = g->edx;
    t12 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
    g->edx = rd32(t12);
    t13 = rd32(t12);
    t14 = cow_thiscall(g, rd32(t13 + 0x1bcu), t12, 0);
    t15 = g->edx;
    wr32(sp0 - 0x60u, t14);
    g->edx = t15;
    t16 = cow_thiscall(g, COW_IMG(0x10027cd0u), sp0 - 0x40u, 1, t14);
    t17 = g->edx;
    g->edx = t17;
    t18 = cow_thiscall(g, COW_IMG(0x100283c0u), sp0 - 0x40u, 0);
    t19 = g->ecx;
    t20 = g->edx;
    wr32(sp0 - 0x50u, 0u);
    wr32(sp0 - 0x54u, 0x451c4000u);
    g->ecx = t19;
    g->edx = t20;
    t21 = cow_stdcall(g, COW_IMG(0x101cc510u), 0);
    t22 = g->ecx;
    t23 = g->edx;
    g->ecx = t22;
    g->edx = t23;
    t24 = cow_stdcall(g, COW_IMG(0x10085240u), 0);
    t25 = g->ecx;
    t26 = g->edx;
    if (t24 == 0u)
    {
        eax = t24;
        edx = t26;
        ebx = in_ebx;
    }
    else
    {
        ecx = t25;
        edx = t26;
        esi = t24;
        edi = t21;
        wr32(sp0 - 0x60u, in_ebx);
        loc_54 = 0x451c4000u;
L_100836b8: ;
        wr32(sp0 - 0x64u, 1u);
        wr32(sp0 - 0x68u, arg2);
        wr32(sp0 - 0x6cu, arg1);
        wr32(sp0 - 0x70u, edi);
        wr32(sp0 - 0x74u, esi);
        g->edx = edx;
        g->esp = sp0 - 0x60u;
        t27 = cow_cdecl(g, COW_IMG(0x10083430u), 5, esi, edi, arg1, arg2, 1u);
        t28 = g->edx;
        if ((uint8_t)t27 == 0u)
        {
            edx = t28;
            loc_50 = 0u;
        }
        else
        {
            eax = t27;
            g->eax = eax;
            g->edx = rd32(esi);
            t29 = rd32(esi);
            g->esp = sp0 - 0x60u;
            t30 = cow_thiscall(g, rd32(t29 + 0x1bcu), esi, 0);
            t31 = g->edx;
            wr32(sp0 - 0x64u, t30);
            wr32(sp0 - 0x68u, sp0 - 0x4cu);
            g->eax = sp0 - 0x4cu;
            g->edx = t31;
            t32 = cow_thiscall(g, COW_IMG(0x10028230u), sp0 - 0x40u, 2, sp0 - 0x4cu, t30);
            t33 = g->edx;
            d34 = (double)rdf32(sp0 - 0x4cu);
            if (d34 < (double)rdf32(COW_IMG(0x103295d8u)))
            {
                edx = t33;
            }
            else
            {
                wr32(sp0 - 0x64u, sp0 - 0x4cu);
                wr32(sp0 - 0x68u, sp0 - 0x4cu);
                g->edx = sp0 - 0x4cu;
                g->esp = sp0 - 0x60u;
                t35 = cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0x4cu, sp0 - 0x4cu);
                t36 = g->edx;
                d37 = cow_take_float(g);
                d38 = (double)rdf32(sp0 - 0x54u);
                if (!(d37 < d38))
                {
                    edx = t36;
                    x0 = d37;
                }
                else
                {
                    edx = t36;
                    x0 = d37;
                    wrf32(sp0 - 0x54u, (float)(double)(float)x0);
                    wr32(sp0 - 0x50u, esi);
                    loc_54_f = (double)(float)x0;
                    loc_50 = esi;
                }
            }
        }
        g->edx = edx;
        g->esp = sp0 - 0x60u;
        t39 = cow_thiscall(g, COW_IMG(0x10085270u), esi, 0);
        t40 = g->ecx;
        t41 = g->edx;
        if (t39 != 0u)
        {
            ecx = t40;
            edx = t41;
            esi = t39;
            goto L_100836b8;
        }
        eax = t39;
        edx = t41;
        ebx = rd32(sp0 - 0x60u);
    }
    g->esp = sp0 - 0x5cu;
    cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    g->ebx = ebx;
    g->esi = rd32(sp0 - 0x58u);
    g->edi = rd32(sp0 - 0x5cu);
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10083620(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10083620(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
