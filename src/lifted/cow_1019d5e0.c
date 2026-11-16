/* f_0x1019d5e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1019d5e0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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

    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x1011a3d0u), rd32(self + 8u), 0);
    edi = self + 0x18u;
    eax = 0u;
    ecx = 0x10u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    if (rd16(COW_IMG(0x1037a3bcu)) == 0xffffu)
    {
        edx = self + 0x18u;
    }
    else
    {
        edx = self + 0x18u;
        esi = 0u;
        edi = self + 0x18u;
        loc_8 = rd32(sp0 - 8u);
L_1019d60f: ;
        t1 = (uint32_t)(int16_t)rd16(COW_IMG(0x1037a3e8u) + esi);
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t2 = cow_call_regs(g, COW_IMG(0x10193850u), t1, g->ecx, g->edx, 1, 1, t1);
        t3 = g->edx;
        t4 = (loc_8 & 0xffffff00u) | (uint8_t)t2;
        g->ecx = t4;
        g->edx = t3;
        g->esp = sp0 - 0x18u;
        t5 = cow_cdecl(g, COW_IMG(0x101afce0u), 1, t4);
        t6 = g->ecx;
        t7 = g->edx;
        t8 = rd16(COW_IMG(0x1037a418u) + (uint8_t)t5 * 2u);
        wr16(edi, (uint16_t)t8);
        if (rd16(COW_IMG(0x1037a3bcu) + esi + 2u) != 0xffffu)
        {
            ecx = t6;
            edx = (t7 & 0xffff0000u) | t8;
            esi = esi + 2u;
            edi = edi + 2u;
            loc_8 = (loc_8 & 0xffffff00u) | (uint8_t)t2;
            goto L_1019d60f;
        }
        edx = (t7 & 0xffff0000u) | t8;
    }
    if ((int8_t)rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) >= 0)
    {
        eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        edx = (edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
        goto L_1019d66e;
    }
    eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
    edx = (edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
    if (eax == 2u) goto L_1019d672;
    if (eax == 3u) goto L_1019d672;
L_1019d66e: ;
    if (eax == 0u) goto L_1019d68a;
L_1019d672: ;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t9 = cow_thiscall(g, COW_IMG(0x10120450u), COW_IMG(0x104e1bf8u), 1, COW_IMG(0x1037a81cu));
    t10 = g->edx;
    wr32(self + 0x14u, t9);
    g->edx = t10;
    return t9;
L_1019d68a: ;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t11 = cow_thiscall(g, COW_IMG(0x10120450u), COW_IMG(0x104e1bf8u), 1, COW_IMG(0x1037a808u));
    t12 = g->edx;
    wr32(self + 0x14u, t11);
    g->edx = t12;
    return t11;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1019d5e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1019d5e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
