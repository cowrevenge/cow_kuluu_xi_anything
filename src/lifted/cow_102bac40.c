/* f_0x102bac40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
void cow_fn_102bac40(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t sf;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 4u, in_ebp);
    if (arg5 == 0u)
    {
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
        wr32(sp0 - 0x14u, sp0 + 0x14u);
        wr32(sp0 - 0x18u, 0u);
        wr32(sp0 - 0x1cu, arg3);
        wr32(sp0 - 0x20u, t2);
        wr32(sp0 + 4u, t2);
        g->esp = sp0 - 0x10u;
        cow_call_regs(g, COW_IMG(0x102ba6b0u), t2, g->ecx, g->edx, 1, 4, t2, arg3, 0u, sp0 + 0x14u);
        t3 = rd32(t2 + 8u) - arg5;
        wr32(arg4, t3);
        if ((int32_t)rd32(t2 + 8u) <= 0)
        {
            eax = rd32(t2 + 8u);
            ecx = arg4;
        }
        else
        {
            edi = t2;
            wr32(sp0 - 0x10u, in_ebx);
            ecx = arg4;
            ebx = 0u;
            esi = 0u;
L_102bac8e: ;
            if (rd32(ebx + rd32(edi + 4u) + 4u) != 0u)
            {
                eax = rd32(ebx + rd32(edi + 4u) + 4u);
                sf = (int32_t)rd32(ebx + rd32(edi + 4u) + 4u) < 0;
                if (!sf)
                {
                    wr32(arg5 + esi * 4u, eax - 1u);
                }
                else
                {
                    wr32(arg5 + esi * 4u, 0xffffffffu - eax);
                    ecx = 0xffffffffu - eax;
                }
            }
            else
            {
                eax = rd32(ebx + rd32(edi + 4u) + 4u);
                edx = rd32(edi + 4u);
                wr32(sp0 - 0x14u, 0x1abu);
                wr32(sp0 - 0x18u, COW_IMG(0x103c24e0u));
                wr32(sp0 - 0x1cu, COW_IMG(0x103b379cu));
                g->eax = eax;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x14u;
                t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103c24e0u));
                t5 = g->ecx;
                t6 = g->edx;
                wr32(sp0 - 0x20u, esi);
                wr32(sp0 - 0x24u, COW_IMG(0x103c2510u));
                g->ecx = t5;
                g->esp = sp0 - 0x1cu;
                cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103c2510u), esi);
                t7 = g->ecx;
                ecx = t7;
            }
            if ((int32_t)(esi + 1u) < (int32_t)rd32(edi + 8u))
            {
                ebx = ebx + 0xcu;
                esi = esi + 1u;
                goto L_102bac8e;
            }
            eax = rd32(edi + 8u);
        }
        wr32(sp0 - 0x10u, sp0 + 4u);
        g->esp = sp0 - 4u;
        cow_cdecl(g, COW_IMG(0x102ba660u), 3, sp0 + 4u, rd32(sp0 - 0xcu), rd32(sp0 - 8u));
        esi = rd32(sp0 - 8u);
        edi = rd32(sp0 - 0xcu);
    }
    g->esi = esi;
    g->edi = edi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102bac40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102bac40(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
