/* f_0x10143590 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10143590(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
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
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((uint32_t)(int16_t)arg2 == 5u) goto L_101435bc;
    if ((uint32_t)(int16_t)arg2 != 6u)
    {
        eax = (uint32_t)(int16_t)arg2 - 6u;
        edx = in_edx;
        goto L_101435e8;
    }
    g->edx = in_edx;
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x10037bf0u), self, 0);
    t1 = g->edx;
    t2 = rd32(rd32(COW_IMG(0x10578290u)) + 8u);
    g->eax = rd32(COW_IMG(0x10578290u));
    t3 = rd32(COW_IMG(0x10578290u));
    t4 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t1, 2, t2, 0u);
    t5 = g->edx;
    g->edx = t5;
    return (t4 & 0xffffff00u) | 1u;
L_101435bc: ;
    g->eax = (uint32_t)(int16_t)arg2 - 5u;
    g->esp = sp0;
    t6 = cow_thiscall(g, COW_IMG(0x10037b90u), self, 0);
    t7 = g->ecx;
    t8 = (t6 & 0xffffff00u) | rd8(rd32(COW_IMG(0x10578290u)) + 0x14u);
    g->eax = t8;
    g->edx = rd32(COW_IMG(0x10578290u));
    t9 = rd32(COW_IMG(0x10578290u));
    t10 = cow_thiscall_cdecl(g, COW_IMG(0x10141fe0u), t7, 2, t8, arg3);
    t11 = g->edx;
    t12 = rd32(t11 + 8u);
    t13 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t11, 2, t12, 0u);
    t14 = g->edx;
    eax = t13;
    edx = t14;
L_101435e8: ;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10143590(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10143590(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
