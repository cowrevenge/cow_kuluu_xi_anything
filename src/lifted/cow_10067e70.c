/* f_0x10067e70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10067e70(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
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
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 1052u);

    wr32(sp0 - 0x40cu, in_ebx);
    wr32(sp0 - 0x410u, in_ebp);
    wr32(sp0 - 0x414u, in_esi);
    wr32(sp0 - 0x418u, in_edi);
    wr32(sp0 - 0x404u, self);
    edi = self + 0x400u;
    eax = 0u;
    ecx = 0x80u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t1 = rd8(arg1);
    wr8(sp0 - 0x400u, (uint8_t)t1);
    if ((uint8_t)t1 == 0u)
    {
        edx = (in_edx & 0xffffff00u) | t1;
        goto L_10067ef5;
    }
    eax = arg1;
    ecx = sp0 - 0x400u;
L_10067ea6: ;
    if ((uint32_t)(int8_t)rd8(eax) - 0x21u > 0x1du)
    {
        edx = (uint32_t)(int8_t)rd8(eax);
        goto L_10067eea;
    }
    esi = (uint32_t)(int8_t)rd8(eax) - 0x21u;
    t2 = rd32(COW_IMG(0x10067fdcu) + rd8(COW_IMG(0x10067fe8u) + esi) * 4u);
    edx = rd8(COW_IMG(0x10067fe8u) + esi);
    switch (t2 - RD)
    {
    case 0x10067ec0u: goto L_10067ec0;
    case 0x10067edbu: goto L_10067edb;
    case 0x10067eeau: goto L_10067eea;
    default: rt_fatal(g, COW_IMG(0x10067eb9u), "switch");
    }
    return;
L_10067ec0: ;
    if (rd8(eax + 1u) == 0x3du)
    {
        edx = (edx & 0xffffff00u) | rd8(eax + 1u);
        goto L_10067ed2;
    }
    edx = (edx & 0xffffff00u) | rd8(eax + 1u);
    if ((uint8_t)edx == 0x3eu) goto L_10067ed2;
    if ((uint8_t)edx != 0x3cu) goto L_10067eea;
L_10067ed2: ;
    t3 = rd8(eax + 1u);
    wr8(ecx + 1u, (uint8_t)t3);
    eax = eax + 1u;
    ecx = ecx + 1u;
    edx = (edx & 0xffffff00u) | t3;
L_10067ee6: ;
    wr8(ecx + 1u, 0x20u);
    ecx = ecx + 1u;
L_10067eea: ;
    t4 = rd8(eax + 1u);
    wr8(ecx + 1u, (uint8_t)t4);
    if ((uint8_t)t4 != 0u)
    {
        eax = eax + 1u;
        ecx = ecx + 1u;
        goto L_10067ea6;
    }
    edx = (edx & 0xffffff00u) | t4;
L_10067ef5: ;
    wr8(sp0 - 0x405u, 0u);
    eax = 0u;
    ecx = self;
    esi = sp0 - 0x400u;
    edi = self + 0x400u;
L_10067f03: ;
    if ((uint32_t)(int8_t)rd8(esi) > 0x2cu)
    {
        edx = (edx & 0xffffff00u) | rd8(esi);
        goto L_10067f63;
    }
    edx = (edx & 0xffffff00u) | rd8(esi);
    ebp = (uint32_t)(int8_t)rd8(esi);
    t5 = rd32(COW_IMG(0x10068008u) + rd8(COW_IMG(0x1006801cu) + ebp) * 4u);
    switch (t5 - RD)
    {
    case 0x10067f1cu: goto L_10067f1c;
    case 0x10067f33u: goto L_10067f33;
    case 0x10067f36u: ebx = rd8(COW_IMG(0x1006801cu) + ebp); goto L_10067f36;
    case 0x10067f63u: goto L_10067f63;
    case 0x10067fa9u: goto L_10067fa9;
    default: rt_fatal(g, COW_IMG(0x10067f15u), "switch");
    }
    return;
L_10067edb: ;
    if (rd8(eax + 1u) != 0x3du) goto L_10067eea;
    wr8(ecx + 1u, 0x3du);
    eax = eax + 1u;
    ecx = ecx + 1u;
    goto L_10067ee6;
L_10067f1c: ;
    if (rd8(sp0 - 0x405u) == 0u)
    {
        edx = (edx & 0xffffff00u) | rd8(sp0 - 0x405u);
    }
    else
    {
        edx = (edx & 0xffffff00u) | rd8(sp0 - 0x405u);
        wr32(edi, COW_IMG(0x10354018u));
        eax = eax + 1u;
        edi = edi + 4u;
    }
    wr8(sp0 - 0x405u, 1u);
L_10067f33: ;
    esi = esi + 1u;
    goto L_10067f03;
L_10067f36: ;
    t6 = rd8(esi + 1u);
    wr32(edi, ecx);
    wr8(ecx, (uint8_t)t6);
    wr8(sp0 - 0x405u, 0u);
    if ((uint8_t)t6 == 0x22u)
    {
        eax = eax + 1u;
        ecx = ecx + 1u;
        edx = (edx & 0xffffff00u) | t6;
        ebx = ebx & 0xffffff00u;
        esi = esi + 1u;
        edi = edi + 4u;
        goto L_10067f5e;
    }
    eax = eax + 1u;
    ecx = ecx + 1u;
    edx = (edx & 0xffffff00u) | t6;
    ebx = ebx & 0xffffff00u;
    esi = esi + 1u;
    edi = edi + 4u;
L_10067f4e: ;
    if ((uint8_t)edx == (uint8_t)ebx) goto L_10067f03;
    t7 = rd8(esi + 1u);
    wr8(ecx, (uint8_t)t7);
    if ((uint8_t)t7 != 0x22u)
    {
        ecx = ecx + 1u;
        edx = (edx & 0xffffff00u) | t7;
        esi = esi + 1u;
        goto L_10067f4e;
    }
    ecx = ecx + 1u;
    edx = (edx & 0xffffff00u) | t7;
    esi = esi + 1u;
L_10067f5e: ;
    wr8(ecx - 1u, (uint8_t)ebx);
    goto L_10067f03;
L_10067f63: ;
    wr32(edi, ecx);
    wr8(ecx, (uint8_t)edx);
    wr8(sp0 - 0x405u, 0u);
    if ((uint8_t)edx == 0x2cu)
    {
        eax = eax + 1u;
        ecx = ecx + 1u;
        edi = edi + 4u;
        goto L_10067f95;
    }
    eax = eax + 1u;
    ecx = ecx + 1u;
    edi = edi + 4u;
L_10067f76: ;
    if ((uint8_t)edx == 0x20u) goto L_10067f95;
    if ((uint8_t)edx == 9u) goto L_10067f95;
    if ((uint8_t)edx == 0xau) goto L_10067f95;
    if ((uint8_t)edx == 0u) goto L_10067f95;
    t8 = rd8(esi + 1u);
    wr8(ecx, (uint8_t)t8);
    if ((uint8_t)t8 != 0x2cu)
    {
        ecx = ecx + 1u;
        edx = (edx & 0xffffff00u) | t8;
        esi = esi + 1u;
        goto L_10067f76;
    }
    ecx = ecx + 1u;
    edx = (edx & 0xffffff00u) | t8;
    esi = esi + 1u;
L_10067f95: ;
    t9 = rd8(esi);
    wr8(ecx - 1u, 0u);
    if ((uint8_t)t9 == 0u)
    {
        edx = (edx & 0xffffff00u) | t9;
    }
    else
    {
        edx = (edx & 0xffffff00u) | t9;
        esi = esi + 1u;
    }
    goto L_10067f03;
L_10067fa9: ;
    if (rd8(sp0 - 0x405u) != 0u)
    {
        wr32(eax * 4u + self + 0x400u, COW_IMG(0x10354018u));
        eax = eax + 1u;
    }
    wr8(ecx, 0u);
    wr32(self + 0x600u, eax);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10067e70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10067e70(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
