/* f_0x101d61c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101d61c0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;

    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        edx = 0u;
        goto L_101d621a;
    }
    eax = rd32(COW_IMG(0x104dfd98u));
    if ((int8_t)rd8(self + 0x14u) <= 0)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x14u);
        goto L_101d620a;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x14u);
    if ((int8_t)eax > 10) goto L_101d620a;
    t1 = rd32(COW_IMG(0x1037ec30u) + (uint32_t)(int8_t)eax * 4u);
    wr8(self + 0x16u, 0u);
    wr32(self + 0x1cu, t1);
    if (rd16(t1) == 0u)
    {
        eax = t1;
    }
    else
    {
        eax = t1;
        ebx = in_ebx;
L_101d61ed: ;
        t2 = rd8(self + 0x16u);
        wr8(self + 0x16u, (uint8_t)(t2 + 1u));
        if (rd16(eax + (uint32_t)(int8_t)(t2 + 1u) * 2u) != 0u)
        {
            ebx = (ebx & 0xffffff00u) | (uint8_t)(t2 + 1u);
            goto L_101d61ed;
        }
    }
    wr8(self + 0x18u, 0u);
    wr8(self + 0x19u, 0u);
    wr8(self + 0x1au, 0u);
    g->edx = 0u;
    return eax;
L_101d620a: ;
    t3 = rd32(self + 8u);
    g->edx = 0u;
    g->esp = sp0;
    t4 = cow_call_regs(g, COW_IMG(0x1015e790u), eax, COW_IMG(0x10621838u), g->edx, 0, 2, t3, 1u);
    t5 = g->edx;
    eax = t4;
    edx = t5;
L_101d621a: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d61c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101d61c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
