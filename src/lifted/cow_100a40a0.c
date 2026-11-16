/* f_0x100a40a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_100a40a0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd8(COW_IMG(0x10487e48u)) == 0u) goto L_100a40c8;
    eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x10487e48u));
    g->eax = eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0;
    t1 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x82u);
    t2 = g->ecx;
    t3 = g->edx;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x100e3570u), arg1, g->ecx, g->edx, 1, 5, arg1, 3u, 0u, t1, 9u);
    return;
L_100a40c8: ;
    eax = COW_IMG(0x10485bb4u);
    ecx = 0u;
L_100a40cf: ;
    if (rd8(eax) == 0u) goto L_100a4100;
    if ((int32_t)(eax + 0x140u) < (int32_t)COW_IMG(0x104860b4u))
    {
        eax = eax + 0x140u;
        ecx = ecx + 1u;
        goto L_100a40cf;
    }
    eax = eax + 0x140u;
    ecx = ecx + 1u;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0;
    t4 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x83u);
    t5 = g->edx;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x100e3570u), t4, g->ecx, g->edx, 1, 5, arg1, 3u, 0u, t4, 9u);
    return;
L_100a4100: ;
    esi = arg1;
    edi = COW_IMG(0x10485a78u) + ecx * 0x140u;
    ecx = 6u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    esi = arg2;
    edi = COW_IMG(0x10485ab4u) + ecx * 0x140u;
    ecx = 0x40u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr8(COW_IMG(0x10485bb4u) + ecx * 0x140u, 1u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a40a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100a40a0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
