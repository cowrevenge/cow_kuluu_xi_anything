/* f_0x1020be90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1020be90(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 1u);
    t2 = g->ecx;
    t3 = g->edx;
    g->esp = sp0 - 0x14u;
    t4 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 2u);
    eax = t4;
    ecx = COW_IMG(0x103859bcu);
    edx = self + 0x898u;
L_1020beb4: ;
    t5 = rd32(rd32(eax) + (uint32_t)(int16_t)rd16(ecx) * 4u);
    wr32(edx, t5);
    if ((int32_t)(ecx + 2u) <= (int32_t)COW_IMG(0x103859d2u))
    {
        ecx = ecx + 2u;
        edx = edx + 4u;
        goto L_1020beb4;
    }
    ecx = ecx + 2u;
    edx = edx + 4u;
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t6 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 1u);
    eax = t6;
    ecx = COW_IMG(0x103859d4u);
    edx = self + 0x8c8u;
L_1020bee3: ;
    t7 = rd32(rd32(eax) + (uint32_t)(int16_t)rd16(ecx) * 4u);
    wr32(edx, t7);
    if ((int32_t)(ecx + 2u) <= (int32_t)COW_IMG(0x103859e6u))
    {
        ecx = ecx + 2u;
        edx = edx + 4u;
        goto L_1020bee3;
    }
    ecx = ecx + 2u;
    edx = edx + 4u;
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t8 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 3u);
    eax = t8;
    ecx = COW_IMG(0x103859e8u);
    edx = self + 0x8f0u;
L_1020bf12: ;
    t9 = rd32(rd32(eax) + (uint32_t)(int16_t)rd16(ecx) * 4u);
    wr32(edx, t9);
    if ((int32_t)(ecx + 2u) <= (int32_t)COW_IMG(0x103859ecu))
    {
        ecx = ecx + 2u;
        edx = edx + 4u;
        goto L_1020bf12;
    }
    ecx = ecx + 2u;
    edx = edx + 4u;
    wr32(self + 0x50u, self + 0x898u);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t10 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 1u);
    eax = t10;
    ecx = COW_IMG(0x103859f0u);
    edx = self + 0x900u;
L_1020bf44: ;
    t11 = rd32(rd32(eax) + (uint32_t)(int16_t)rd16(ecx) * 4u);
    wr32(edx, t11);
    if ((int32_t)(ecx + 2u) < (int32_t)COW_IMG(0x10385a04u))
    {
        ecx = ecx + 2u;
        edx = edx + 4u;
        goto L_1020bf44;
    }
    ecx = ecx + 2u;
    edx = edx + 4u;
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t12 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 1u);
    t13 = rd32(rd32(t12) + 0x12cu);
    wr32(self + 0x54u, t13);
    t14 = rd32(rd32(t12) + 0x50cu);
    wr32(self + 0x34u, t13);
    wr32(self + 0x8fcu, t14);
    wr8(self + 0x49u, 1u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1020be90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1020be90(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
