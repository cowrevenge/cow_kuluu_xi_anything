/* f_0x102a9910 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_102a9910(Guest* g)
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(arg1 + 0x14u) == 0u) goto L_102a9966;
    if (arg3 == 0u) goto L_102a9966;
    if (rd32(arg1 + arg2 * 4u + 0x18u) != 0u)
    {
        eax = rd32(arg1 + arg2 * 4u + 0x18u);
        goto L_102a996b;
    }
    eax = rd32(arg1 + arg2 * 4u + 0x18u);
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x102a99a0u), 6, arg1, arg2, arg4, in_edi, in_esi, in_ebp);
L_102a9942: ;
    t4 = rd32(arg1 + 0x14u) * arg4 * 4u;
    t5 = rd32(arg1 + arg2 * 4u + 0x54u);
    esi = arg3;
    edi = t5;
    ecx = t4 >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = t4 & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    wr8(arg1 + arg2 + 0x48u, 0u);
L_102a9966: ;
    return;
L_102a996b: ;
    if (eax == arg4) goto L_102a9942;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103be750u));
    t1 = g->ecx;
    t2 = g->edx;
    t3 = rd32(arg1 + arg2 * 4u + 0x18u);
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103be8c0u), arg4);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102a9910(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102a9910(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
