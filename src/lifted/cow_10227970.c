/* f_0x10227970 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10227970(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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

    g->eax = rd32(rd32(COW_IMG(0x106671bcu)));
    g->edx = in_edx;
    t1 = rd32(rd32(COW_IMG(0x106671bcu)));
    g->esp = sp0 - 0xcu;
    t2 = cow_thiscall(g, rd32(t1), rd32(COW_IMG(0x106671bcu)), 0);
    t3 = g->edx;
    t4 = cow_fastcall(g, COW_IMG(0x10221920u), self, t3, 5, COW_IMG(0x10227f70u), COW_IMG(0x10228080u), 0u, 0u, 0x24u);
    t5 = g->edx;
    wr32(self + 0x58u, 9u);
    g->edx = t5;
    t6 = cow_thiscall(g, COW_IMG(0x10221cd0u), self, 0);
    t7 = g->edx;
    t8 = rd32(self + 8u);
    wr16(self + 0x374u, 0u);
    wr8(self + 0x376u, 1u);
    wr8(t8 + 0x69u, 0u);
    g->edx = t7;
    t9 = cow_thiscall(g, COW_IMG(0x1011ab50u), rd32(self + 8u), 1, 0x3f3d70a4u);
    t10 = g->edx;
    g->edx = t10;
    t11 = cow_thiscall(g, COW_IMG(0x1011aba0u), rd32(self + 8u), 2, 0xfffffffbu, 0xfffffffbu);
    t12 = g->edx;
    cow_thiscall(g, COW_IMG(0x10227900u), self, 0);
    eax = self + 0x268u;
    ecx = self + 0x290u;
L_102279eb: ;
    wr16(ecx, 0xffffu);
    wr8(eax + 0x68u, 0u);
    wr8(eax, 0u);
    if ((int32_t)(eax - self - 0x267u) < 32)
    {
        eax = eax + 1u;
        ecx = ecx + 2u;
        goto L_102279eb;
    }
    eax = eax + 1u;
    wr32(self + 0x288u, 0u);
    wr32(self + 0x28cu, 0u);
    g->edx = 0xfffffd98u - self;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10227970(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10227970(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
