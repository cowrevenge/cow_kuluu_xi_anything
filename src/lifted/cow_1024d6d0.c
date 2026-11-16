/* f_0x1024d6d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1024d6d0(Guest* g)
{
    uint32_t ebx;
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
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_call_regs(g, COW_IMG(0x10252a20u), in_eax, g->ecx, g->edx, 1, 3, arg1 + 0xa8u, 0x80u, in_edi);
    t2 = g->edx;
    if ((rd8(arg1) & 0x20u) == 0u)
    {
        edx = t2;
        esi = 0u;
        edi = arg1 + 0xf0u;
L_1024d6fa: ;
        t3 = rd32(arg1 + 0x78u);
        g->ecx = (uint32_t)((int32_t)esi >> 1u);
        g->esp = sp0 - 0x10u;
        t4 = cow_cdecl(g, COW_IMG(0x10251090u), 3, edi, (uint32_t)((int32_t)esi >> 1u), t3);
        t5 = g->ecx;
        t6 = rd32(edi + 0xcu);
        g->edx = t6;
        cow_cdecl(g, COW_IMG(0x1026fa00u), 5, t6, 1u, edi, (uint32_t)((int32_t)esi >> 1u), t3);
        t7 = g->edx;
        if ((int32_t)(esi + 1u) < 4)
        {
            edx = t7;
            esi = esi + 1u;
            edi = edi + 0x1cu;
            goto L_1024d6fa;
        }
    }
    if ((int32_t)rd32(arg1 + 0xb0u) >= 0)
    {
        ebx = 4u;
        esi = arg1 + 0x168u;
        edi = arg1 + 0x78u;
L_1024d735: ;
        if (rd32(esi + 0x10u) != 0u)
        {
            t8 = rd32(arg1 + 0xb0u);
            wr32(esi, t8);
            g->esp = sp0 - 0x10u;
            cow_cdecl(g, COW_IMG(0x10251090u), 3, esi - 8u, 0xffffffffu, rd32(edi));
        }
        if (ebx != 1u)
        {
            ebx = ebx - 1u;
            esi = esi + 0x1cu;
            edi = edi + 4u;
            goto L_1024d735;
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1024d6d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1024d6d0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
