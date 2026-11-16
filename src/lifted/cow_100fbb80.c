/* f_0x100fbb80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100fbb80(Guest* g)
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
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd16(arg3 + 8u) < 0x900u)
    {
        edi = (in_edi & 0xffff0000u) | rd16(arg3 + 8u);
        goto L_100fbb96;
    }
    return in_eax & 0xffffff00u;
L_100fbb96: ;
    if (rd32(arg1 + (uint16_t)edi * 8u + 0x3c43cu) == rd32(arg3 + 4u))
    {
        eax = rd32(arg1 + (uint16_t)edi * 8u + 0x3c43cu);
        ecx = rd32(arg3 + 4u);
        esi = arg1 + (uint16_t)edi * 8u + 0x3c43cu;
        goto L_100fbbc3;
    }
    eax = rd32(arg1 + (uint16_t)edi * 8u + 0x3c43cu);
    ecx = rd32(arg3 + 4u);
    esi = arg1 + (uint16_t)edi * 8u + 0x3c43cu;
    if (eax == 0u)
    {
        edx = in_edx;
        goto L_100fbbf7;
    }
    if (eax == 0xffffffffu)
    {
        edx = in_edx;
        goto L_100fbbf7;
    }
    edx = (in_edx & 0xffffff00u) | rd8(arg3 + 0xau);
    zf = (uint8_t)(rd8(arg3 + 0xau) - 0x1fu) == 0u;
L_100fbbe0: ;
    if (!zf)
    {
        t1 = (edx & 0xffff0000u) | (uint8_t)edx;
        t2 = (t1 & 0xffff0000u) | rd16(esi + 4u);
        g->edx = t2;
        g->esp = sp0 - 0xcu;
        t3 = cow_cdecl(g, COW_IMG(0x100fc830u), 5, edi, ecx, eax, t2, t1);
        t4 = g->edx;
        eax = t3;
        edx = t4;
    }
L_100fbbf7: ;
    if ((rd8(arg3 + 0xau) & 0x20u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(arg3 + 0xau);
        goto L_100fbc10;
    }
    eax = (eax & 0xffffff00u) | rd8(arg3 + 0xau);
    wr16(esi + 4u, 0u);
    wr32(esi, 0xffffffffu);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_100fbbc3: ;
    if ((rd8(esi + 4u) & 0x1fu) == 0x1fu)
    {
        edx = (in_edx & 0xffffff00u) | (rd8(esi + 4u) & 0x1fu);
        goto L_100fbbf7;
    }
    edx = (in_edx & 0xffffff00u) | (rd8(esi + 4u) & 0x1fu);
    if ((rd8(arg3 + 0xau) & 0x1fu) == 0x1fu)
    {
        edx = (edx & 0xffffff00u) | rd8(arg3 + 0xau);
        goto L_100fbbf7;
    }
    edx = (edx & 0xffffff00u) | rd8(arg3 + 0xau);
    zf = (uint8_t)((uint8_t)edx - 0x20u) == 0u;
    goto L_100fbbe0;
L_100fbc10: ;
    wr16(esi + 4u, rd16(esi + 4u) | (uint8_t)eax);
    t5 = rd32(arg3 + 4u);
    wr32(esi, t5);
    g->edx = edx;
    return (eax & 0xffff0000u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100fbb80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100fbb80(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
