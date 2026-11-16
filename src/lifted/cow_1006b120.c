/* f_0x1006b120 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1006b120(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    eax = 0u;
    ecx = self;
L_1006b128: ;
    if (rd8(eax + self + 8u) == 0u) goto L_1006b191;
    ecx = (ecx & 0xffffff00u) | rd8(eax + self + 8u);
    if ((int32_t)(eax + 1u) < 32)
    {
        eax = eax + 1u;
        goto L_1006b128;
    }
    eax = 0u;
    edx = self + 0x428u;
    ebp = 0xffffffffu;
    esi = 0xffffffffu;
L_1006b144: ;
    if (rd32(edx) < esi)
    {
        ecx = rd32(edx);
        ebp = eax;
        esi = ecx;
    }
    if ((int32_t)(eax + 1u) < 32)
    {
        eax = eax + 1u;
        edx = edx + 4u;
        goto L_1006b144;
    }
    eax = eax + 1u;
    if (ebp == 0xffffffffu) goto L_1006b1c1;
    t1 = rd32(ebp * 0x20u + self + 0x28u);
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, rd32(rd32(t1) + 8u), rd32(t1), 1, t1);
    esi = arg1;
    edi = ebp * 0x20u + self + 0x28u;
    ecx = 8u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t2 = rd32(self + 4u) + 1u;
    wr32(self + 4u, t2);
    wr32(ebp * 4u + self + 0x428u, t2);
    return (t2 & 0xffffff00u) | 1u;
L_1006b191: ;
    esi = arg1;
    edi = eax * 0x20u + self + 0x28u;
    ecx = 8u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t3 = rd32(self + 4u) + 1u;
    wr32(self + 4u, t3);
    wr32(eax * 4u + self + 0x428u, t3);
    wr8(eax + self + 8u, 1u);
    return (eax & 0xffffff00u) | 1u;
L_1006b1c1: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1006b120(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1006b120(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
