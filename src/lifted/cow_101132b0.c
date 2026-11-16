/* f_0x101132b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_101132b0(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(arg3 + 4u) <= rd32(COW_IMG(0x104e1710u)))
    {
        eax = rd32(arg3 + 4u);
        ecx = rd32(COW_IMG(0x104e1710u));
        edx = (in_edx & 0xffff0000u) | rd16(COW_IMG(0x104e1716u));
    }
    else
    {
        eax = rd32(arg3 + 4u);
        wr32(COW_IMG(0x104e1710u), eax);
        wr16(COW_IMG(0x104e1714u), 0u);
        wr16(COW_IMG(0x104e1716u), 0u);
        wr16(COW_IMG(0x104e171cu), 0u);
        wr16(COW_IMG(0x104e171eu), 0u);
        wr16(COW_IMG(0x104e1720u), 0u);
        wr32(COW_IMG(0x104e1718u), 0u);
        ecx = eax;
        edx = in_edx & 0xffff0000u;
    }
    if (rd32(arg3 + 4u) != ecx) goto L_10113396;
    if (rd16(arg3 + 8u) <= rd16(COW_IMG(0x104e1714u)))
    {
        eax = (eax & 0xffff0000u) | rd16(arg3 + 8u);
        goto L_10113396;
    }
    eax = (eax & 0xffff0000u) | rd16(arg3 + 8u);
    if ((uint16_t)eax != (uint16_t)rd32(COW_IMG(0x104e1714u)) + 1u)
    {
        eax = (uint16_t)eax;
        goto L_10113396;
    }
    eax = (uint16_t)eax;
    if ((uint16_t)edx < 0x400u)
    {
        t1 = 0x400u - (uint16_t)edx;
        t2 = COW_IMG(0x104e1742u) + (uint16_t)edx;
        g->ecx = arg3 + 0xcu;
        g->edx = t2;
        g->esp = sp0 - 0xcu;
        cow_call_regs(g, COW_IMG(0x10312090u), (uint16_t)edx, g->ecx, g->edx, 1, 3, t2, arg3 + 0xcu, t1);
        t3 = g->ecx;
        t4 = g->edx;
        t5 = rd16(COW_IMG(0x104e1716u));
        edi = COW_IMG(0x104e1742u) + rd16(COW_IMG(0x104e1716u));
        eax = 0u;
        ecx = 0xffffffffu;
        cf = sp0 - 0xcu < sp0 - 0x18u;
        pf = PARITY((uint8_t)(sp0 - 0xcu));
        af = (sp0 - 0x18u ^ sp0 - 0xcu) >> 4u & 1u;
        zf = sp0 == 0xcu;
        sf = (int32_t)(sp0 - 0xcu) < 0;
        of = ((sp0 - 0x18u ^ sp0 - 0xcu) & (sp0 - 0xcu ^ 0xcu)) >> 0x1fu;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        wr16(COW_IMG(0x104e1716u), (uint16_t)((uint16_t)t5 + (uint16_t)(~ecx - 1u)));
        edx = ((t4 | t5) & 0xffff0000u) | (uint16_t)((uint16_t)t5 + (uint16_t)(~ecx - 1u));
    }
    wr16(COW_IMG(0x104e1714u), (uint16_t)(rd16(COW_IMG(0x104e1714u)) + 1u));
    if (rd16(arg3 + 0xau) != 0u)
    {
        eax = (eax & 0xffffff00u) | 1u;
        goto L_10113398;
    }
    eax = (eax & 0xffffff00u) | 1u;
    wr16(COW_IMG(0x104e1716u), 0u);
    g->edx = edx;
    return eax;
L_10113396: ;
    eax = (eax & 0xffffff00u) | 1u;
L_10113398: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101132b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101132b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
