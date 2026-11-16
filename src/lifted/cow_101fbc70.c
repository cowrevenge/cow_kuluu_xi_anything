/* f_0x101fbc70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101fbc70(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
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

    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 2u);
    eax = t1;
    ecx = COW_IMG(0x10382178u);
    edx = self + 0x18u;
L_101fbc87: ;
    t2 = rd32(rd32(eax) + (uint32_t)(int16_t)rd16(ecx) * 4u);
    wr32(edx, t2);
    if ((int32_t)(ecx + 2u) < (int32_t)COW_IMG(0x10382188u))
    {
        ecx = ecx + 2u;
        edx = edx + 4u;
        goto L_101fbc87;
    }
    edx = edx + 4u;
    t3 = rd32(COW_IMG(0x10663888u));
    wr16(t3 + 0x7au, 0x28u);
    wr32(t3 + 0x94u, t3 + 0x174u);
    if (rd32(COW_IMG(0x10663888u)) == 0u)
    {
        eax = rd32(COW_IMG(0x10663888u));
    }
    else
    {
        eax = rd32(COW_IMG(0x10663888u));
        ecx = t3 + 0x174u;
        if (rd8(eax + 0x10au) == 0u)
        {
            t4 = rd32(self + 8u);
            wr8(t4 + 0x30u, rd8(t4 + 0x30u) & 0xfbu);
            eax = t4;
        }
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t5 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 0xfu, 0xbu);
    t6 = g->edx;
    t7 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 0xfu, 0xcu);
    t8 = rd32(self + 8u);
    wr8(t8 + 0x86u, 0u);
    g->edx = t8;
    return t7;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101fbc70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101fbc70(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
