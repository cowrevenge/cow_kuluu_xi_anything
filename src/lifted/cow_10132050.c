/* f_0x10132050 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=1 */
uint32_t cow_fn_10132050(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t pf;
    uint32_t sf;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;

    if (rd32(sp0 + 4u) == 0u)
    {
        eax = in_eax;
        loc_4 = self;
        goto L_1013212e;
    }
    esi = rd32(sp0 + 4u);
    if (rd32(esi + 0x14d4u) == 0u)
    {
        eax = rd32(esi + 0x14d4u);
        loc_4 = self;
        goto L_1013212e;
    }
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        loc_4 = self;
        goto L_1013212e;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    if (!(rd8(COW_IMG(0x10485824u)) & 1u))
    {
        loc_4 = self;
        goto L_1013212e;
    }
    if (rd32(eax + 0x70u) == 0u)
    {
        eax = rd32(eax + 0x70u);
        loc_4 = self;
        goto L_1013212e;
    }
    eax = rd32(eax + 0x70u);
    t4 = rd8(eax + 0xefu);
    wr8(sp0 + 4u, rd8(COW_IMG(0x10485640u)));
    t5 = rd8(COW_IMG(0x10485640u));
    g->esp = sp0 - 0x14u;
    t6 = cow_stdcall(g, COW_IMG(0x101cc5d0u), 0);
    if (rd32(esi + 0x14d8u) == 0u)
    {
        eax = t6;
        loc_4 = self;
        goto L_1013212e;
    }
    eax = t6;
    edx = rd32(esi + 0x14d8u);
    ebx = (in_ebx & 0xffffff00u) | t4;
    if (rd32(esi + 0x14dcu) == 0u)
    {
        loc_4 = self;
        goto L_1013212e;
    }
    edi = rd32(esi + 0x14dcu);
    if (rd32(esi + 0x14d0u) == 0u)
    {
        loc_4 = self;
        goto L_1013212e;
    }
    ebp = rd32(esi + 0x14d0u);
    pf = PARITY((uint8_t)rd32(esi + 0x14d0u));
    zf = rd32(esi + 0x14d0u) == 0u;
    sf = (int32_t)rd32(esi + 0x14d0u) < 0;
    if ((rd16(edx) & 1u << (ebx & 0x1fu)) == 0u)
    {
        loc_4 = 1u;
        goto L_1013212e;
    }
    ecx = rd16(edx);
    pf = PARITY((uint8_t)(rd16(edx) & 1u << (ebx & 0x1fu)));
    zf = (rd16(edx) & 1u << (ebx & 0x1fu)) == 0u;
    sf = (int32_t)(rd16(edx) & 1u << (ebx & 0x1fu)) < 0;
    if ((rd32(edi) & 1u << (rd8(sp0 + 4u) & 0x1fu)) == 0u)
    {
        loc_4 = 1u;
        goto L_1013212e;
    }
    ecx = (ecx & 0xffffff00u) | rd8(sp0 + 4u);
    edx = 1u << (rd8(sp0 + 4u) & 0x1fu);
    if (rd16(ebp) > (uint8_t)eax)
    {
        eax = (eax & 0xffff0000u) | (uint8_t)eax;
        loc_4 = 1u;
        goto L_1013212e;
    }
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t7 = cow_stdcall(g, COW_IMG(0x101cc600u), 0);
    t8 = g->edx;
    if (rd32(esi + 0x14e0u) == 0u)
    {
        ecx = rd32(esi + 0x14e0u);
        edx = t8;
        goto L_10132111;
    }
    eax = t7;
    ecx = rd32(esi + 0x14e0u);
    edx = t8;
    if ((uint8_t)eax < rd8(ecx))
    {
        loc_4 = 1u;
        goto L_1013212e;
    }
L_10132111: ;
    g->esp = sp0 - 0x14u;
    t9 = cow_stdcall(g, COW_IMG(0x100fd350u), 0);
    return (t9 & 0xffffff00u) | (rd16(rd32(esi + 0x14d4u)) & t9) == 0u;
L_1013212e: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10132050(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10132050(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
