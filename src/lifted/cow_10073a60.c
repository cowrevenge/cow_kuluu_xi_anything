/* f_0x10073a60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10073a60(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10072030u), arg1, 0);
    t1 = g->ecx;
    t2 = g->edx;
    if (!(arg2 & 1u))
    {
        eax = rd32(arg1 + 0x24u) & 0x7fu;
        ecx = (t1 & 0xffffff00u) | (uint8_t)arg2;
        goto L_10073aa8;
    }
    eax = rd32(arg1 + 0x24u) & 0x7fu;
    ecx = (t1 & 0xffffff00u) | (uint8_t)arg2;
    edx = t2;
    if (eax == 0x58u) goto L_10073a99;
    if (eax == 0x3du) goto L_10073a99;
    if (eax == 0x20u) goto L_10073a99;
    if (eax == 0x5du) goto L_10073a99;
    if (eax == 0x1bu) goto L_10073a99;
    if (eax != 0x18u) goto L_10073aa8;
L_10073a99: ;
    g->eax = rd32(arg1);
    t3 = rd32(arg1);
    g->esp = sp0 - 4u;
    t4 = cow_thiscall(g, rd32(t3 + 0x20u), arg1, 0);
    wr8(arg1 + 0x1au, rd8(arg1 + 0x1au) | 8u);
    return t4;
L_10073aa8: ;
    if ((ecx & 2u) == 0u) goto L_10073afd;
    if (eax == 0xau) goto L_10073b0c;
    if (eax == 0x2eu) goto L_10073b0c;
    if (eax == 0x36u) goto L_10073b0c;
    if (eax == 0x2au) goto L_10073b0c;
    if (eax == 0x29u) goto L_10073b0c;
    if (eax == 0x2bu) goto L_10073b0c;
    if (eax == 0x1fu) goto L_10073b0c;
    if (eax == 0x21u) goto L_10073b0c;
    if (eax == 0x25u) goto L_10073b0c;
    if (eax == 0x39u) goto L_10073b0c;
    if (eax == 0x31u) goto L_10073b0c;
    if (eax == 0x30u) goto L_10073b0c;
    if (eax == 0x13u) goto L_10073b0c;
    if (eax == 0x49u) goto L_10073b0c;
    if (eax == 0x44u) goto L_10073b0c;
    if (eax == 0x3eu) goto L_10073b0c;
L_10073afd: ;
    if ((ecx & 4u) == 0u) goto L_10073b17;
    if (rd8(arg1 + 0x1au) >> 3u & 1u)
    {
        eax = (eax & 0xffffff00u) | rd8(arg1 + 0x1au) >> 3u;
        goto L_10073b17;
    }
    eax = (eax & 0xffffff00u) | rd8(arg1 + 0x1au) >> 3u;
L_10073b0c: ;
    g->eax = eax;
    g->esp = sp0 - 4u;
    t5 = cow_thiscall(g, rd32(rd32(arg1) + 0x20u), arg1, 0);
    wr8(arg1 + 0x1au, rd8(arg1 + 0x1au) | 8u);
    eax = t5;
L_10073b17: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10073a60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10073a60(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
