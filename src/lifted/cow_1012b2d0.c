/* f_0x1012b2d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1012b2d0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 24u);

    wr32(sp0 - 4u, in_ebp);
    if ((int32_t)rd32(sp0 + 8u) < 0) goto L_1012b2e0;
    eax = rd32(sp0 + 8u);
    if ((int32_t)eax < 8) goto L_1012b2e2;
L_1012b2e0: ;
    eax = 0u;
L_1012b2e2: ;
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, in_edi);
    esi = self + 0x1cu;
    edi = self + 0x36u;
    ecx = 6u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t1 = rd8(self + 0x53u);
    wr8(self + 0x53u, 0u);
    wr16(edi, rd16(esi)); esi += (g->df ? (uint32_t)-2 : 2u); edi += (g->df ? (uint32_t)-2 : 2u);
    wr8(self + 0x54u, (uint8_t)t1);
    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        ecx = rd32(COW_IMG(0x104dfd98u));
        edx = in_edx;
    }
    else
    {
        ecx = rd32(COW_IMG(0x104dfd98u));
        edx = eax * 3u;
        esi = COW_IMG(0x1036f390u) + eax * 0xdu;
        edi = rd32(sp0 + 4u);
L_1012b315: ;
        t2 = rd8(esi);
        wr8(sp0 + 8u, (uint8_t)t2);
        if ((uint8_t)t2 == 0x1cu) goto L_1012b350;
        wr32(sp0 - 0x10u, sp0 + 8u);
        wr32(sp0 - 0x14u, edi);
        g->eax = sp0 + 8u;
        g->ecx = self;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t3 = cow_stdcall(g, COW_IMG(0x1012af30u), 2, edi, sp0 + 8u);
        t4 = g->ecx;
        t5 = g->edx;
        if ((uint8_t)t3 == 0u)
        {
            eax = t3;
            ecx = t4;
            edx = t5;
        }
        else
        {
            eax = t3;
            ecx = t4;
            t6 = rd8(sp0 + 8u);
            t7 = rd8(self + 0x53u);
            wr16(self + t7 * 2u + 0x1cu, (uint16_t)t6);
            t8 = rd8(self + 0x53u);
            wr8(self + 0x53u, (uint8_t)(t8 + 1u));
            eax = (eax & 0xffffff00u) | (uint8_t)(t8 + 1u);
            ecx = (ecx & 0xffff0000u) | t6;
            edx = t7;
        }
        if (rd8(self + 0x53u) < 0xdu)
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0x53u);
            esi = esi + 1u;
            goto L_1012b315;
        }
    }
L_1012b350: ;
    if (rd32(self + 8u) == 0u)
    {
        eax = rd32(self + 8u);
        goto L_1012b37b;
    }
    eax = rd32(self + 8u);
    wr16(eax + 0x58u, rd8(self + 0x53u));
    t9 = rd32(self + 8u);
    wr32(sp0 + 8u, 0u);
    t10 = (edx & 0xffff0000u) | rd16(t9 + 0x4cu);
    wr32(sp0 + 4u, t10);
    g->esp = sp0;
    g->edx = t10;
    return cow_tailcall(g, COW_IMG(0x10118db0u), eax, t9, t10);
L_1012b37b: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1012b2d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1012b2d0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
