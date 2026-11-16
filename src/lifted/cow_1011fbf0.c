/* f_0x1011fbf0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=6 */
void cow_fn_1011fbf0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_ebp);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    t1 = rd32(self + 0x14u);
    wr32(sp0 - 4u, t1);
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    t2 = cow_thiscall(g, COW_IMG(0x10126500u), self + 4u, 0);
    t3 = g->edx;
    wr32(sp0 - 8u, t2);
    if ((int32_t)arg5 <= 0)
    {
        eax = arg5;
        edx = t3;
        ebp = t1;
        esi = 0u;
    }
    else
    {
        edx = t3;
        ebp = t1;
        edi = arg5;
L_1011fc1a: ;
        wr32(sp0 - 0x1cu, sp0 - 8u);
        g->eax = sp0 - 8u;
        g->esp = sp0 - 0x18u;
        t4 = cow_call_regs(g, COW_IMG(0x10126520u), g->eax, g->ecx, edx, 0, 1, sp0 - 8u);
        t5 = g->edx;
        if (edi != 1u)
        {
            edx = t5;
            edi = edi - 1u;
            goto L_1011fc1a;
        }
        eax = t4;
        edx = t5;
        esi = arg5;
    }
    if ((int32_t)esi < (int32_t)ebp)
    {
L_1011fc35: ;
        if ((int32_t)esi >= (int32_t)arg6) goto L_1011fc71;
        wr32(sp0 - 0x1cu, sp0 - 8u);
        g->eax = eax;
        g->esp = sp0 - 0x18u;
        t6 = cow_call_regs(g, COW_IMG(0x10126520u), g->eax, g->ecx, edx, 0, 1, sp0 - 8u);
        t7 = g->edx;
        if (t6 == 0u)
        {
            edx = t7;
        }
        else
        {
            eax = t6;
            wr32(sp0 - 0x1cu, arg4);
            wr32(sp0 - 0x20u, arg3);
            wr32(sp0 - 0x24u, 0x3f800000u);
            wr32(sp0 - 0x28u, 0x3f800000u);
            wr32(sp0 - 0x2cu, arg2);
            wr32(sp0 - 0x30u, arg1);
            g->ebx = self + 4u;
            g->esp = sp0 - 0x18u;
            cow_fastcall(g, COW_IMG(0x1011e980u), eax, arg2, 6, arg1, arg2, 0x3f800000u, 0x3f800000u, arg3, arg4);
            t8 = g->edx;
            edx = t8;
        }
        if ((int32_t)(esi + 1u) < (int32_t)rd32(sp0 - 4u))
        {
            eax = rd32(sp0 - 4u);
            esi = esi + 1u;
            goto L_1011fc35;
        }
    }
L_1011fc71: ;
    g->ebx = in_ebx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1011fbf0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1011fbf0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 24u);
}
/* COW_ADAPTER END */
