/* f_0x101e1b40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101e1b40(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 0x24u, in_esi);
    wr32(sp0 - 0x28u, in_edi);
    wr32(sp0 - 0x20u, 0u);
    edi = sp0 - 0x1cu;
    eax = 0u;
    ecx = 7u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t1 = rd8(arg1 + 5u);
    t2 = rd16(arg1 + 0x22u);
    wr8(sp0 - 0x1bu, (uint8_t)t1);
    t3 = rd8(arg1 + 4u);
    t4 = rd16(arg1 + 8u);
    wr16(sp0 - 0x1au, (uint16_t)t4);
    t5 = rd16(sp0 - 0x18u);
    wr8(sp0 - 0x1cu, (uint8_t)t3);
    wr16(sp0 - 0x18u, (uint16_t)(t5 ^ ((t2 ^ t5) & 0x7fffu)));
    t6 = rd32(arg1 + 0x24u);
    wr32(sp0 - 0x16u, t6);
    t7 = rd32(arg1 + 0x28u);
    wr32(sp0 - 0x12u, t7);
    t8 = rd32(arg1 + 0x2cu);
    t9 = rd32(arg1 + 0x30u);
    wr32(sp0 - 0xeu, t8);
    wr32(sp0 - 0xau, t9);
    if ((uint8_t)t3 <= 1u)
    {
        eax = t9;
        edx = t8;
        goto L_101e1bb9;
    }
    eax = t9;
    ecx = (ecx & 0xffffff00u) | t3;
    edx = t8;
    if ((uint8_t)ecx != 0xcu) goto L_101e1bc7;
L_101e1bb9: ;
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, sp0 - 0x20u);
    g->esp = sp0 - 0x28u;
    cow_fastcall(g, COW_IMG(0x101e1c90u), self, edx, 2, sp0 - 0x20u, 0u);
L_101e1bc7: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e1b40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101e1b40(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
