/* f_0x1012e030 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1012e030(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_4;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((uint32_t)(int16_t)arg1 == 5u) goto L_1012e053;
    if ((uint32_t)(int16_t)arg1 != 6u)
    {
        eax = (uint32_t)(int16_t)arg1 - 6u;
        edx = in_edx;
        goto L_1012e091;
    }
    t1 = rd32(COW_IMG(0x1062193cu));
    wr8(t1 + 0x59u, 1u);
    wr8(rd32(COW_IMG(0x10621940u)) + 0x59u, 1u);
    return t1;
L_1012e053: ;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0;
    t2 = cow_cdecl(g, COW_IMG(0x101cc350u), 2, 1u, 0u);
    t3 = g->ecx;
    t4 = g->edx;
    if ((uint8_t)t2 == 0u)
    {
        eax = t2;
        ecx = t3;
        edx = t4;
        loc_4 = 0x46u;
    }
    else
    {
        eax = t2;
        ecx = t3;
        edx = t4;
        loc_4 = 0x258u;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t5 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, loc_4);
    t6 = g->edx;
    g->edx = t6;
    t7 = cow_thiscall(g, COW_IMG(0x10210e30u), rd32(COW_IMG(0x10664520u)), 7, COW_IMG(0x1012e0a0u), 0u, t5, 0u, 0u, 1u, 0u);
    t8 = g->edx;
    eax = t7;
    edx = t8;
L_1012e091: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1012e030(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1012e030(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
