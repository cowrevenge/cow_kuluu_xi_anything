/* f_0x100700e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_100700e0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd8(COW_IMG(0x1047cee8u)) & 1u)
    {
        eax = (in_eax & 0xffffff00u) | 1u;
        edx = in_edx;
    }
    else
    {
        ecx = (self & 0xffffff00u) | rd8(COW_IMG(0x1047cee8u));
        wr32(COW_IMG(0x1047cc38u), 0x3f800000u);
        wr8(COW_IMG(0x1047cee8u), (uint8_t)(ecx | 1u));
        wr32(COW_IMG(0x1047cc3cu), 0u);
        wr32(COW_IMG(0x1047cc40u), 0u);
        wr32(COW_IMG(0x1047cc44u), 0u);
        wr32(COW_IMG(0x1047cc48u), 0u);
        wr32(COW_IMG(0x1047cc4cu), 0x3f800000u);
        wr32(COW_IMG(0x1047cc50u), 0u);
        wr32(COW_IMG(0x1047cc54u), 0u);
        wr32(COW_IMG(0x1047cc58u), 0u);
        wr32(COW_IMG(0x1047cc5cu), 0u);
        wr32(COW_IMG(0x1047cc60u), 0x3f800000u);
        wr32(COW_IMG(0x1047cc64u), 0u);
        wr32(COW_IMG(0x1047cc68u), 0u);
        wr32(COW_IMG(0x1047cc6cu), 0u);
        wr32(COW_IMG(0x1047cc70u), 0u);
        wr32(COW_IMG(0x1047cc74u), 0x3f800000u);
        g->edx = (in_edx & 0xffffff00u) | (uint8_t)(ecx | 1u);
        g->esp = sp0 - 0xcu;
        t1 = cow_cdecl(g, COW_IMG(0x103134c6u), 1, COW_IMG(0x10070200u));
        t2 = g->edx;
        eax = t1;
        edx = t2;
    }
    esi = COW_IMG(0x1047cc38u);
    edi = self + 0x810u;
    ecx = 0x10u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    esi = COW_IMG(0x1047cc38u);
    edi = self + 0x850u;
    ecx = 0x10u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    esi = COW_IMG(0x1047cc38u);
    edi = self + 0x890u;
    ecx = 0x10u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    esi = COW_IMG(0x1047cc38u);
    edi = self + 0x8d0u;
    ecx = 0x10u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->esp = sp0;
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x1006ce40u), eax, self, edx);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100700e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100700e0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
