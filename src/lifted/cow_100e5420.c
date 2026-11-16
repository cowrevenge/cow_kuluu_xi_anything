/* f_0x100e5420 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100e5420(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint8_t)arg1 > 0x10u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_100e543f;
    }
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_cdecl(g, COW_IMG(0x100fc3c0u), 3, 0x51u, 0u, 0u);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        edi = t1;
        goto L_100e5444;
    }
    eax = t1;
    edx = t3;
L_100e543f: ;
    g->edx = edx;
    return eax & 0xffffff00u;
L_100e5444: ;
    if ((uint8_t)arg1 != 0u)
    {
        eax = arg2;
        ecx = edi + 0xau;
        edx = arg2 + 5u;
        esi = (uint8_t)arg1;
L_100e545b: ;
        t4 = rd8(edx - 5u);
        wr8(ecx - 1u, (uint8_t)t4);
        t5 = rd8(edx - 1u);
        wr8(ecx - 2u, (uint8_t)t5);
        t6 = rd8(edx);
        wr8(ecx, (uint8_t)t6);
        if (esi != 1u)
        {
            eax = ((eax | t4 | t5) & 0xffffff00u) | t6;
            ecx = ecx + 4u;
            edx = edx + 8u;
            esi = esi - 1u;
            goto L_100e545b;
        }
        eax = ((eax | t4 | t5) & 0xffffff00u) | t6;
        ecx = ecx + 4u;
        edx = edx + 8u;
    }
    wr8(edi + 4u, (uint8_t)arg1);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t7 = cow_cdecl(g, COW_IMG(0x100fc4d0u), 3, edi, 0x48u, 0u);
    t8 = g->edx;
    g->edx = t8;
    return (t7 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e5420(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e5420(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
