/* f_0x102390d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_102390d0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(self + 0x20u) == 1u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_1023916d;
    }
    if ((uint32_t)(int16_t)arg1 - 1u > 8u)
    {
        eax = (uint32_t)(int16_t)arg1 - 1u;
        goto L_10239166;
    }
    t1 = rd32(COW_IMG(0x10239174u) + rd8(COW_IMG(0x10239184u) + (uint32_t)(int16_t)arg1 - 1u) * 4u);
    switch (t1 - RD)
    {
    case 0x10239102u: goto L_10239102;
    case 0x10239139u: goto L_10239139;
    case 0x10239157u: ecx = rd8(COW_IMG(0x10239184u) + (uint32_t)(int16_t)arg1 - 1u); goto L_10239157;
    case 0x10239166u: eax = (uint32_t)(int16_t)arg1 - 1u; goto L_10239166;
    default: rt_fatal(g, COW_IMG(0x102390fbu), "switch");
    }
    return 0;
L_10239102: ;
    t5 = (uint32_t)(int16_t)arg2 - 1u;
    t6 = rd32(self + 0x1cu);
    wr32(self + 0x14u, t5);
    if (t6 != (uint32_t)(int16_t)arg2)
    {
        eax = t5;
        g->ebx = (in_ebx & 0xffff0000u) | (uint16_t)arg2;
        g->eax = eax;
        g->ecx = self;
        g->edx = in_edx;
        g->esp = sp0 - 0xcu;
        t7 = cow_stdcall(g, COW_IMG(0x10238f50u), 1, eax);
        t8 = g->ecx;
        t9 = g->edx;
        wr32(self + 0x1cu, (uint32_t)(int16_t)arg2);
        cow_thiscall(g, COW_IMG(0x10037b30u), t8, 0);
    }
    t10 = rd32(self + 0x14u);
    t11 = rd32(COW_IMG(0x10668fd8u));
    wr32(t11 + 0x1cu, t10);
    wr32(self + 0x1cu, (uint32_t)(int16_t)arg2);
    g->ebx = in_ebx;
    g->edx = (uint32_t)(int16_t)arg2;
    return t11;
L_10239139: ;
    wr32(self + 0x18u, 1u);
    t3 = (uint32_t)(int16_t)arg2 - 1u;
    wr32(self + 0x14u, t3);
    wr32(self + 0x20u, 1u);
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->esp = sp0 - 0xcu;
    t4 = cow_thiscall(g, COW_IMG(0x10037b90u), t3, 0);
    wr32(self + 0x1cu, (uint32_t)(int16_t)arg2);
    g->edx = (uint32_t)(int16_t)arg2;
    return t4;
L_10239157: ;
    wr32(self + 0x18u, 0xffffffffu);
    wr32(self + 0x20u, 1u);
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->esp = sp0 - 0xcu;
    t2 = cow_thiscall(g, COW_IMG(0x10037bf0u), ecx, 0);
    eax = t2;
L_10239166: ;
    wr32(self + 0x1cu, (uint32_t)(int16_t)arg2);
    edx = (uint32_t)(int16_t)arg2;
L_1023916d: ;
    g->ebx = in_ebx;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102390d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102390d0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
