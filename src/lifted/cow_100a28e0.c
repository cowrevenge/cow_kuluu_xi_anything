/* f_0x100a28e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100a28e0(Guest* g)
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
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;

    wr8(self + 0x58u, 0u);
    wr8(self + 0x59u, 0u);
    wr8(self + 0x5au, 0u);
    wr8(self + 0x5bu, 0u);
    wr32(self + 0x5cu, 0u);
    wr32(self + 0x60u, 0u);
    wr32(self + 0x64u, 0u);
    wr32(self + 0x68u, 0u);
    wr32(self + 0x6cu, 0u);
    edi = self + 0x70u;
    eax = 0u;
    ecx = 0x20u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    if (rd32(self + 0x48u) == 0u) goto L_100a29a4;
    eax = rd32(self + 0x48u);
    if (rd8(eax) == 1u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax);
        goto L_100a2958;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax);
    if ((uint8_t)ecx <= 9u) goto L_100a29a4;
    if ((uint8_t)ecx > 0xdu) goto L_100a29a4;
    wr8(self + 0x58u, (uint8_t)ecx);
    wr8(self + 0x5au, rd8(eax + 2u));
    t1 = rd8(eax + 3u);
    wr8(self + 0x5bu, (uint8_t)t1);
    g->ebx = 0u;
    g->esp = sp0 - 0x10u;
    t2 = cow_call_regs(g, COW_IMG(0x100a2b70u), eax, self, g->edx, 0, 2, self + 0x70u, 0u);
    t3 = rd32(self + 0x6cu);
    wr32(self + 0x38u, 0u);
    wr32(self + 0x34u, 0u);
    wr32(self + 0x6cu, t2 + t3);
    g->ebx = in_ebx;
    return;
L_100a2958: ;
    wr8(self + 0x58u, (uint8_t)ecx);
    t4 = rd8(eax + 2u);
    wr8(self + 0x5au, (uint8_t)t4);
    t5 = rd8(eax + 3u);
    wr8(self + 0x5bu, (uint8_t)t5);
    if ((uint8_t)t4 == 1u)
    {
        edx = (in_edx & 0xffffff00u) | t5;
        wr32(self + 0x64u, 0xecu);
    }
    else
    {
        eax = (uint8_t)t4 - 1u;
        edx = (in_edx & 0xffffff00u) | t5;
        if (eax == 1u)
        {
            wr32(self + 0x64u, 0xb4u);
        }
        else
        {
            wr32(self + 0x64u, 0u);
        }
    }
    t6 = rd32(self + 0x64u);
    g->ebx = 0u;
    g->esp = sp0 - 0x10u;
    t7 = cow_call_regs(g, COW_IMG(0x100a2b70u), t6, self, g->edx, 0, 2, self + 0x70u, t6);
    t8 = rd32(self + 0x6cu);
    wr32(self + 0x34u, 0u);
    t9 = rd32(self + 0x38u);
    wr32(self + 0x6cu, t7 + t8);
    wr32(self + 0x38u, t9 - 1u);
L_100a29a4: ;
    g->ebx = in_ebx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a28e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100a28e0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
