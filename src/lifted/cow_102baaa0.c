/* f_0x102baaa0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=6 */
uint32_t cow_fn_102baaa0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t sf;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 4u, in_ebp);
    if (arg6 == 0u)
    {
        eax = in_eax;
        edx = in_edx;
        esi = in_esi;
        edi = in_edi;
    }
    else
    {
        wr32(sp0 - 8u, in_esi);
        wr32(sp0 - 0xcu, in_edi);
        t1 = rd32(sp0 + 4u);
        wr32(sp0 - 0x10u, t1);
        g->eax = t1;
        g->esp = sp0 - 0xcu;
        t2 = cow_thiscall_cdecl(g, arg2, self, 1, t1);
        wr32(sp0 - 0x14u, sp0 + 0x18u);
        wr32(sp0 - 0x18u, 0u);
        wr32(sp0 - 0x1cu, arg3);
        wr32(sp0 - 0x20u, t2);
        wr32(sp0 + 4u, t2);
        g->esp = sp0 - 0x10u;
        cow_call_regs(g, COW_IMG(0x102ba6b0u), t2, g->ecx, g->edx, 1, 4, t2, arg3, 0u, sp0 + 0x18u);
        wr32(sp0 - 0x24u, 0x13bu);
        wr32(sp0 - 0x28u, COW_IMG(0x103c24e0u));
        wr32(sp0 - 0x2cu, 0xcu);
        t3 = rd32(t2 + 8u) - arg6;
        wr32(sp0 - 0x30u, t3);
        wr32(arg5, t3);
        g->ecx = arg5;
        g->esp = sp0 - 0x1cu;
        t4 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, t3, 0xcu, COW_IMG(0x103c24e0u), 0x13bu, rd32(sp0 - 0x20u));
        t5 = g->ecx;
        wr32(arg4, t4);
        if ((int32_t)rd32(t2 + 8u) <= 0)
        {
            eax = rd32(t2 + 8u);
            edx = arg4;
        }
        else
        {
            ecx = t5;
            esi = t2;
            wr32(sp0 - 0x10u, in_ebx);
            edx = arg4;
            ebx = 0u;
            edi = 0u;
L_102bab06: ;
            if (rd32(ebx + rd32(esi + 4u) + 4u) != 0u)
            {
                eax = rd32(ebx + rd32(esi + 4u) + 4u);
                sf = (int32_t)rd32(ebx + rd32(esi + 4u) + 4u) < 0;
                if (!sf)
                {
                    wr32(arg6 + edi * 4u, eax - 1u);
                    t11 = rd32(esi + 0xcu) + rd32(ebx + rd32(esi + 4u)) * 0xcu;
                    wr32(sp0 - 0x14u, t11);
                    t12 = eax * 0xcu + rd32(arg4) - 0xcu;
                    wr32(sp0 - 0x18u, t12);
                    g->ecx = arg4;
                    g->edx = rd32(arg4);
                    t13 = rd32(arg4);
                    g->esp = sp0 - 0x10u;
                    cow_cdecl(g, COW_IMG(0x10274670u), 2, t12, t11);
                    t14 = g->ecx;
                    t15 = g->edx;
                    ecx = t14;
                    edx = t15;
                }
                else
                {
                    wr32(arg6 + edi * 4u, 0xffffffffu - eax);
                    ecx = 0xffffffffu - eax;
                }
            }
            else
            {
                eax = rd32(ebx + rd32(esi + 4u) + 4u);
                wr32(sp0 - 0x14u, 0x13fu);
                wr32(sp0 - 0x18u, COW_IMG(0x103c24e0u));
                wr32(sp0 - 0x1cu, COW_IMG(0x103b379cu));
                g->eax = eax;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x14u;
                t6 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103c24e0u));
                t7 = g->ecx;
                t8 = g->edx;
                wr32(sp0 - 0x20u, edi);
                wr32(sp0 - 0x24u, COW_IMG(0x103c2510u));
                g->ecx = t7;
                g->edx = t8;
                g->esp = sp0 - 0x1cu;
                cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103c2510u), edi);
                t9 = g->ecx;
                t10 = g->edx;
                ecx = t9;
                edx = t10;
            }
            if ((int32_t)(edi + 1u) < (int32_t)rd32(esi + 8u))
            {
                ebx = ebx + 0xcu;
                edi = edi + 1u;
                goto L_102bab06;
            }
            eax = rd32(esi + 8u);
        }
        wr32(sp0 - 0x10u, sp0 + 4u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t16 = cow_cdecl(g, COW_IMG(0x102ba660u), 3, sp0 + 4u, rd32(sp0 - 0xcu), rd32(sp0 - 8u));
        t17 = g->edx;
        eax = t16;
        edx = t17;
        esi = rd32(sp0 - 8u);
        edi = rd32(sp0 - 0xcu);
    }
    g->esi = esi;
    g->edi = edi;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102baaa0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102baaa0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
