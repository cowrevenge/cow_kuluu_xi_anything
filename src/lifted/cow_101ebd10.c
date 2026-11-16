/* f_0x101ebd10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101ebd10(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(COW_IMG(0x10663684u)) == 0u)
    {
        eax = rd32(COW_IMG(0x10663684u));
        edx = in_edx;
        goto L_101ebd6e;
    }
    eax = rd32(COW_IMG(0x10663684u));
    if ((uint16_t)arg1 != 5u)
    {
        edx = in_edx;
        goto L_101ebd6e;
    }
    if ((int16_t)arg2 >= 5)
    {
        eax = (eax & 0xffff0000u) | (uint16_t)arg2;
        goto L_101ebd69;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)arg2;
    t1 = (uint32_t)(int8_t)rd8(COW_IMG(0x10381fc7u) + (uint32_t)(int16_t)eax);
    g->eax = t1;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t2 = cow_cdecl(g, COW_IMG(0x100f7a90u), 1, t1);
    t3 = g->ecx;
    t4 = g->edx;
    if (rd8(COW_IMG(0x10381fc7u) + (uint32_t)(int16_t)eax) != 1u)
    {
        eax = (t2 & 0xffffff00u) | rd8(COW_IMG(0x10381fc7u) + (uint32_t)(int16_t)eax);
        ecx = t3;
        edx = t4;
        goto L_101ebd5a;
    }
    eax = (t2 & 0xffffff00u) | rd8(COW_IMG(0x10381fc7u) + (uint32_t)(int16_t)eax);
    ecx = t3;
    edx = t4;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t5 = cow_cdecl(g, COW_IMG(0x100e46a0u), 2, 1u, 1u);
    t6 = g->edx;
    g->edx = t6;
    return t5;
L_101ebd5a: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t7 = cow_cdecl(g, COW_IMG(0x100e46a0u), 2, 1u, 0u);
    t8 = g->edx;
    g->edx = t8;
    return t7;
L_101ebd69: ;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0;
    t9 = cow_thiscall(g, COW_IMG(0x10037c50u), self, 0);
    t10 = g->edx;
    eax = t9;
    edx = t10;
L_101ebd6e: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ebd10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101ebd10(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
