/* f_0x1023f8b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1023f8b0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;

    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10126320u), self + 4u, 0);
    t1 = g->ecx;
    wr16(self + 0xeu, 0xffffu);
    wr32(self + 8u, 0u);
    wr8(self + 0xcu, 1u);
    wr32(self, COW_IMG(0x1033ca88u));
    wr32(self + 0x24u, 0u);
    eax = COW_IMG(0x103d3c84u);
    ecx = t1;
L_1023f8de: ;
    t2 = rd8(eax);
    wr8(eax + self - COW_IMG(0x103d3c84u) + 0x14u, (uint8_t)t2);
    if ((uint8_t)t2 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t2;
        goto L_1023f8de;
    }
    ecx = (ecx & 0xffffff00u) | t2;
    wr32(self + 0x28u, 0u);
    wr32(self + 0x2cu, 0u);
    g->esp = sp0;
    t3 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, self + 0x14u - COW_IMG(0x103d3c84u), 1, 3, 0x6b4u, in_esi, in_ebx);
    t4 = g->edx;
    if (t3 == 0u) goto L_1023f929;
    eax = t3;
    edx = t4;
    g->esp = sp0 - 8u;
    t5 = cow_thiscall(g, COW_IMG(0x101c5be0u), eax, 8, 3u, 0xfu, self, COW_IMG(0x1023f940u), COW_IMG(0x103d3c84u), 0x14au, 0xfu, 0x114u);
    wr32(self + 0x34u, t5);
    return self;
L_1023f929: ;
    wr32(self + 0x34u, 0u);
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1023f8b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1023f8b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
