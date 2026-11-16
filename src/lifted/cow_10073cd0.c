/* f_0x10073cd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_10073cd0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 24u);

    wr32(sp0 - 4u, arg3);
    wr32(sp0 - 8u, arg2);
    wr32(sp0 - 0xcu, sp0 + 0xcu);
    g->eax = sp0 + 0xcu;
    g->edx = arg2;
    g->esp = sp0;
    t1 = cow_stdcall(g, COW_IMG(0x10073ba0u), 3, sp0 + 0xcu, arg2, arg3);
    t2 = g->edx;
    if (rd32(t1) != 0u)
    {
        ecx = rd32(t1);
        goto L_10073d68;
    }
    eax = t1;
    edx = t2;
    wr32(sp0 - 4u, in_ebx);
    wr32(sp0 - 8u, 0x4d727400u);
    wr32(sp0 - 0xcu, arg4);
    g->eax = eax;
    g->edx = edx;
    t3 = rd32(COW_IMG(0x1047d140u));
    g->esp = sp0 - 4u;
    t4 = cow_thiscall(g, COW_IMG(0x10074f30u), t3, 2, arg4, 0x4d727400u);
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 != 0u)
    {
        esi = in_esi;
    }
    else
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        wr32(sp0 - 8u, in_esi);
        wr32(sp0 - 0xcu, eax);
        wr32(sp0 - 0x10u, 4u);
        wr32(sp0 - 0x14u, 0x49u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t7 = cow_cdecl(g, COW_IMG(0x10028fd0u), 2, 0x49u, 4u);
        t8 = g->edx;
        g->esp = sp0 - 8u;
        t9 = cow_fastcall(g, COW_IMG(0x100748f0u), t7, t8, 0);
        t10 = g->edx;
        wr8(COW_IMG(0x1047d13cu), 1u);
        if (t7 == 0u)
        {
            eax = t9;
            edx = t10;
            esi = 0u;
        }
        else
        {
            eax = t9;
            edx = t10;
            esi = t7;
            g->esp = sp0 - 8u;
            t11 = cow_call_regs(g, COW_IMG(0x10074740u), eax, esi, edx, 1, 0);
            t12 = g->edx;
            wr32(esi, COW_IMG(0x1032c908u));
            wr32(esi + 0x38u, 0u);
            wr32(esi + 0x45u, 0u);
            eax = t11;
            edx = t12;
        }
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t13 = cow_thiscall(g, COW_IMG(0x10074a00u), esi, 0);
        t14 = g->edx;
        wr32(sp0 - 0xcu, arg4);
        wr32(sp0 - 0x10u, sp0 + 0xcu);
        cow_thiscall(g, COW_IMG(0x10072c30u), esi, 2, sp0 + 0xcu, arg4);
        esi = rd32(sp0 - 8u);
    }
    t15 = rd32(sp0 - 4u);
    wr32(arg1, 0u);
    g->ebx = t15;
    g->esi = esi;
    return;
L_10073d68: ;
    wr32(arg1, ecx);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10073cd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10073cd0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */
