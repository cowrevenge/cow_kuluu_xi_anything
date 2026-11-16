/* f_0x100da2a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=12 */
void cow_fn_100da2a0(Guest* g)
{
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    unsigned of;
    uint32_t t1;
    uint32_t t2;
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
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg8 = rd32(g->esp + 0x20u);
    const uint32_t arg9 = rd32(g->esp + 0x24u);
    const uint32_t arg10 = rd32(g->esp + 0x28u);
    const uint32_t arg11 = rd32(g->esp + 0x2cu);
    const uint32_t arg12 = rd32(g->esp + 0x30u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->edx = in_edx;
    g->esp = sp0 - 8u;
    cow_thiscall_cdecl(g, COW_IMG(0x1018fc40u), self, 1, arg10);
    t1 = g->ecx;
    t2 = g->edx;
    t3 = g->cf;
    t4 = g->of;
    g->esp = sp0 - 0xcu;
    t5 = cow_thiscall_cdecl(g, COW_IMG(0x1018fc40u), t1, 1, arg11);
    t6 = g->ecx;
    t7 = rd8(sp0 + 0x1cu);
    eax = (t5 & 0xffffff00u) | t7;
    ecx = (t6 & 0xffffff00u) | 0xau;
    cf = g->cf;
    of = g->of;
    { /* imul cl */ { int32_t p = (int32_t)(int8_t)eax * (int32_t)(int8_t)(uint8_t)ecx; eax = (eax & 0xFFFF0000u) | ((uint32_t)p & 0xFFFFu); cf = of = p != (int32_t)(int8_t)p; } }
    wr8(sp0 + 0x1cu, (uint8_t)((uint8_t)((uint8_t)arg8 + (uint8_t)eax) + 0x24u));
    if ((uint8_t)((uint8_t)((uint8_t)arg8 + (uint8_t)eax) + 0x24u) < 0x2fu)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)((uint8_t)arg8 + (uint8_t)eax) + 0x24u);
        goto L_100da2d5;
    }
    eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)((uint8_t)arg8 + (uint8_t)eax) + 0x24u);
    if ((uint8_t)eax < 0x4du) goto L_100da2da;
L_100da2d5: ;
    wr8(sp0 + 0x1cu, 0x2fu);
L_100da2da: ;
    if ((uint8_t)arg12 == 0u) goto L_100da32e;
    t8 = (uint8_t)rd32(sp0 + 0x1cu);
    g->esp = sp0 - 0x24u;
    cow_cdecl(g, COW_IMG(0x100d9b20u), 7, arg1, arg2, arg3, arg4, arg5, COW_IMG(0x10360214u), arg9);
    return;
L_100da32e: ;
    t9 = (uint8_t)rd32(sp0 + 0x1cu);
    g->esp = sp0 - 0x1cu;
    cow_cdecl(g, COW_IMG(0x100d9b20u), 7, arg1, arg2, arg3, arg4, arg5, COW_IMG(0x10360200u), arg9);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100da2a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100da2a0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
