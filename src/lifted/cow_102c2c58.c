/* f_0x102c2c58 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=9 */
uint32_t cow_fn_102c2c58(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg8 = rd32(g->esp + 0x20u);
    const uint32_t arg9 = rd32(g->esp + 0x24u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg1 == 0u) goto L_102c2d83;
    if (arg2 == 0u) goto L_102c2d83;
    if (arg3 == 0u) goto L_102c2d83;
    if (arg4 == 0u) goto L_102c2d83;
    if (arg5 == 0u) goto L_102c2d83;
    if (arg6 == 0u) goto L_102c2d83;
    wr32(arg3, rd32(arg2));
    t1 = rd32(arg2 + 4u);
    wr32(arg4, t1);
    t2 = rd8(arg2 + 0x18u);
    wr32(arg5, t2);
    if (rd8(arg2 + 0x18u) < 1u)
    {
        eax = (t2 & 0xffffff00u) | rd8(arg2 + 0x18u);
        ecx = t1;
        goto L_102c2cb8;
    }
    eax = (t2 & 0xffffff00u) | rd8(arg2 + 0x18u);
    ecx = t1;
    if ((uint8_t)eax <= 0x10u)
    {
        edx = in_edx;
        goto L_102c2cc7;
    }
L_102c2cb8: ;
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, in_edx, 1, 4, arg1, COW_IMG(0x103c80f0u), in_edi, in_esi);
    t3 = g->edx;
    edx = t3;
L_102c2cc7: ;
    t4 = rd8(arg2 + 0x19u);
    wr32(arg6, t4);
    if (rd8(arg2 + 0x19u) > 6u)
    {
        eax = t4;
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, edx, 1, 4, arg1, COW_IMG(0x103c80dcu), in_edi, in_esi);
        t5 = g->edx;
        edx = t5;
    }
    if (arg8 != 0u)
    {
        t6 = rd8(arg2 + 0x1au);
        wr32(arg8, t6);
    }
    if (arg9 != 0u)
    {
        t7 = rd8(arg2 + 0x1bu);
        wr32(arg9, t7);
    }
    if (arg7 != 0u)
    {
        t8 = rd8(arg2 + 0x1cu);
        wr32(arg7, t8);
    }
    if (rd32(arg6) != 3u)
    {
        ecx = rd32(arg6);
        eax = ((uint32_t)(int8_t)ecx & 2u) | 1u;
    }
    else
    {
        ecx = rd32(arg6);
        eax = 1u;
    }
    if ((ecx & 4u) != 0u)
    {
        eax = eax + 1u;
    }
    if (rd32(arg3) <= 0x7fffffffu)
    {
        esi = (uint32_t)((int32_t)(rd32(arg5) * eax + 7u) >> 3u);
    }
    else
    {
        esi = (uint32_t)((int32_t)(rd32(arg5) * eax + 7u) >> 3u);
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, edx, 1, 4, arg1, COW_IMG(0x103c80c8u), in_edi, in_esi);
        t9 = g->edx;
        ecx = COW_IMG(0x103c80c8u);
        edx = t9;
    }
    if (rd32(arg4) > 0x7fffffffu)
    {
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, edx, 1, 4, arg1, COW_IMG(0x103c80b0u), in_edi, in_esi);
        ecx = COW_IMG(0x103c80b0u);
    }
    t10 = cow_divu(g, 0x7fffffffu, esi);
    t11 = cow_modu(g, 0x7fffffffu, esi);
    if (rd32(arg3) > t10 - 0x40u)
    {
        eax = t10 - 0x40u;
        edx = t11;
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, edx, 1, 4, arg1, COW_IMG(0x103c807cu), in_edi, in_esi);
    }
    eax = 1u;
L_102c2d85: ;
    return eax;
L_102c2d83: ;
    eax = 0u;
    goto L_102c2d85;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102c2c58(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102c2c58(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
