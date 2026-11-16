/* f_0x100ebc90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100ebc90(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
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
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 0x14u, in_ebx);
    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        goto L_100ebcce;
    }
    if ((uint8_t)arg2 != 0u)
    {
        ecx = self;
        edx = in_edx;
        ebx = (in_ebx & 0xffffff00u) | (uint8_t)arg2;
        goto L_100ebcbc;
    }
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, sp0 - 0x10u);
    g->ebx = (in_ebx & 0xffffff00u) | (uint8_t)arg2;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x100eb850u), self, 2, sp0 - 0x10u, 1u);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 != 1u)
    {
        eax = t1;
        goto L_100ebcce;
    }
    ecx = t2;
    edx = t3;
    ebx = (in_ebx & 0xffffff00u) | rd8(sp0 - 0x10u);
L_100ebcbc: ;
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, 0x41u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t4 = cow_cdecl(g, COW_IMG(0x100fc3c0u), 3, 0x41u, 0u, 0u);
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 != 0u)
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        goto L_100ebcd5;
    }
    eax = t4;
L_100ebcce: ;
    g->ebx = in_ebx;
    return eax & 0xffffff00u;
L_100ebcd5: ;
    wr8(eax + 5u, (uint8_t)ebx);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 8u);
    wr32(sp0 - 0x20u, eax);
    wr8(eax + 4u, (uint8_t)arg1);
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x100fc4d0u), 3, eax, 8u, 0u);
    t7 = rd32(COW_IMG(0x104dfd98u));
    t8 = rd32(sp0 - 0x14u);
    wr32((uint8_t)arg1 * 0x58u + t7 + 0x1954cu, 2u);
    g->ebx = t8;
    return (t7 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100ebc90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100ebc90(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
