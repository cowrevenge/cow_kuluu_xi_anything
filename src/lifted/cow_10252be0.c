/* f_0x10252be0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10252be0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 == 0u)
    {
        eax = arg1;
        edx = in_edx;
        goto L_10252c17;
    }
    if ((rd8(arg1) & 4u) == 0u)
    {
        eax = arg1;
        edx = in_edx;
        goto L_10252c17;
    }
    if ((int32_t)rd32(rd32(arg1 + 0x20u) + 0x44u) <= 0)
    {
        eax = rd32(rd32(arg1 + 0x20u) + 0x44u);
        edx = in_edx;
        goto L_10252c17;
    }
    eax = rd32(rd32(arg1 + 0x20u) + 0x44u);
    ecx = self;
    edx = in_edx;
    esi = rd32(arg1 + 0x20u);
    edi = 0u;
L_10252bfb: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t1 = cow_cdecl(g, COW_IMG(0x10279890u), 2, esi, edi);
    t2 = g->edx;
    if (rd32(t1) == 0xb0001u)
    {
        eax = t1;
        ecx = rd32(t1);
        edx = t2;
        goto L_10252c1d;
    }
    ecx = rd32(t1);
    edx = t2;
    if ((int32_t)(edi + 1u) < (int32_t)rd32(esi + 0x44u))
    {
        eax = rd32(esi + 0x44u);
        edi = edi + 1u;
        goto L_10252bfb;
    }
    eax = rd32(esi + 0x44u);
L_10252c17: ;
    g->edx = edx;
    return 0xffffffffu;
L_10252c1d: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x1026e750u), 2, esi, eax);
    t3 = g->edx;
    g->edx = t3;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10252be0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10252be0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
