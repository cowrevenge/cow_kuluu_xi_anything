/* f_0x1028c430 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1028c430(Guest* g)
{
    double d15;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, in_edi);
    if (rd32(arg1 + 0x24u) == 0u)
    {
        ebx = in_ebx;
        esi = in_esi;
    }
    else
    {
        wr32(sp0 - 0xcu, COW_IMG(0x103b9b84u));
        wr32(sp0 - 0x10u, arg2);
        g->ecx = self;
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x10314d95u), 2, arg2, COW_IMG(0x103b9b84u));
        t1 = g->ecx;
        t2 = g->edx;
        if ((int32_t)rd32(arg1 + 0x24u) <= 0)
        {
            ebx = in_ebx;
            esi = in_esi;
        }
        else
        {
            eax = rd32(arg1 + 0x24u);
            ecx = t1;
            edx = t2;
            wr32(sp0 - 0xcu, in_ebx);
            wr32(sp0 - 0x10u, in_esi);
            ebp = 0u;
L_1028c462: ;
            wr32(sp0 - 0x14u, ebp);
            wr32(sp0 - 0x18u, arg1);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t3 = cow_cdecl(g, COW_IMG(0x10279850u), 2, arg1, ebp);
            t4 = g->ecx;
            t5 = g->edx;
            wr32(sp0 - 0x1cu, ebp);
            wr32(sp0 - 0x20u, arg1);
            g->ecx = t4;
            g->edx = t5;
            g->esp = sp0 - 0x18u;
            t6 = cow_cdecl(g, COW_IMG(0x10279b20u), 2, arg1, ebp);
            t7 = g->ecx;
            t8 = g->edx;
            if (!(rd32(t3 + 0x20u) & 1u))
            {
                eax = rd32(t3 + 0x20u);
                ecx = t7;
                edx = t8;
                ebx = t3;
                esi = t6;
                if ((eax & 2u) == 0u)
                {
                    wr32(sp0 - 0x14u, 0x222u);
                    wr32(sp0 - 0x18u, COW_IMG(0x103b98f8u));
                    wr32(sp0 - 0x1cu, COW_IMG(0x103b379cu));
                    g->eax = eax;
                    g->ecx = ecx;
                    g->edx = edx;
                    g->esp = sp0 - 0x14u;
                    t18 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103b98f8u));
                    t19 = g->ecx;
                    t20 = g->edx;
                    wr32(sp0 - 0x20u, esi);
                    wr32(sp0 - 0x24u, COW_IMG(0x103b9b38u));
                    g->ecx = t19;
                    g->edx = t20;
                    g->esp = sp0 - 0x1cu;
                    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b9b38u), esi);
                    t21 = g->ecx;
                    t22 = g->edx;
                    wr32(sp0 - 0x28u, esi);
                    wr32(sp0 - 0x2cu, COW_IMG(0x103b9b0cu));
                    wr32(sp0 - 0x30u, arg2);
                    g->ecx = t21;
                    g->edx = t22;
                    cow_cdecl(g, COW_IMG(0x10314d95u), 5, arg2, COW_IMG(0x103b9b0cu), esi, COW_IMG(0x103b9b38u), rd32(sp0 - 0x20u));
                    t23 = g->ecx;
                    t24 = g->edx;
                    ecx = t23;
                    edx = t24;
                }
                else
                {
                    wr32(sp0 - 0x14u, ebx);
                    wr32(sp0 - 0x18u, arg1);
                    g->eax = eax;
                    g->ecx = ecx;
                    g->esp = sp0 - 0x10u;
                    t13 = cow_cdecl(g, COW_IMG(0x1028c510u), 2, arg1, ebx);
                    t14 = g->ecx;
                    d15 = cow_take_float(g);
                    wrf64(sp0 - 0x18u, d15);
                    wr32(sp0 - 0x1cu, 0x80u);
                    wr32(sp0 - 0x20u, esi);
                    wr32(sp0 - 0x24u, COW_IMG(0x103b9b58u));
                    wr32(sp0 - 0x28u, arg2);
                    g->ecx = t14;
                    g->edx = arg2;
                    g->esp = sp0 - 0x14u;
                    cow_cdecl(g, COW_IMG(0x10314d95u), 5, arg2, COW_IMG(0x103b9b58u), esi, 0x80u, cow_dlo(d15));
                    t16 = g->ecx;
                    t17 = g->edx;
                    ecx = t16;
                    edx = t17;
                }
            }
            else
            {
                eax = rd32(t3 + 0x20u);
                ecx = t7;
                edx = t8;
                esi = t6;
                wr32(sp0 - 0x14u, ebp);
                wr32(sp0 - 0x18u, 0u);
                wr32(sp0 - 0x1cu, arg1);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t9 = cow_cdecl(g, COW_IMG(0x10279bc0u), 3, arg1, 0u, ebp);
                t10 = g->edx;
                wr32(sp0 - 0x20u, t9);
                wr32(sp0 - 0x24u, esi);
                wr32(sp0 - 0x28u, COW_IMG(0x103b9b70u));
                wr32(sp0 - 0x2cu, arg2);
                g->ecx = arg2;
                g->edx = t10;
                g->esp = sp0 - 0x18u;
                cow_cdecl(g, COW_IMG(0x10314d95u), 5, arg2, COW_IMG(0x103b9b70u), esi, t9, arg1);
                t11 = g->ecx;
                t12 = g->edx;
                ecx = t11;
                edx = t12;
            }
            if ((int32_t)(ebp + 1u) < (int32_t)rd32(arg1 + 0x24u))
            {
                eax = rd32(arg1 + 0x24u);
                ebp = ebp + 1u;
                goto L_1028c462;
            }
            ebx = rd32(sp0 - 0xcu);
            esi = rd32(sp0 - 0x10u);
        }
    }
    g->ebx = ebx;
    g->esi = esi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1028c430(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1028c430(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
