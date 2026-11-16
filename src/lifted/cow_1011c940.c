/* f_0x1011c940 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1011c940(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = rd8(arg1 + 1u);
    if (rd8(arg1) > 0x9fu)
    {
        eax = rd8(arg1);
        ecx = t1;
        eax = eax - 0xb1u;
    }
    else
    {
        eax = rd8(arg1);
        ecx = t1;
        eax = eax - 0x71u;
    }
    if (ecx <= 0x7fu)
    {
        eax = (eax * 2u & 0xffffff00u) | (uint8_t)(eax * 2u | 1u);
    }
    else
    {
        eax = (eax * 2u & 0xffffff00u) | (uint8_t)(eax * 2u | 1u);
        ecx = ecx - 1u;
    }
    if (ecx < 0x9eu)
    {
        ecx = ecx - 0x1fu;
    }
    else
    {
        eax = eax + 1u;
        ecx = ecx - 0x7du;
    }
    if ((eax << 8u | ecx) < 0x9320u)
    {
        edx = eax << 8u | ecx;
        goto L_1011c98f;
    }
    edx = eax << 8u | ecx;
    g->edx = edx;
    return (eax & 0xffff0000u) | 0xcbu;
L_1011c98f: ;
    if (edx < 0x7921u) goto L_1011c9a7;
    g->edx = eax * 0x30u - eax;
    return eax * 0x5eu + ecx - 0xcd1u;
L_1011c9a7: ;
    if (edx < 0x5021u) goto L_1011c9bf;
    g->edx = eax * 0x30u - eax;
    return eax * 0x5eu + ecx - 0xdecu;
L_1011c9bf: ;
    if (edx < 0x3021u) goto L_1011c9d7;
    g->edx = eax * 0x30u - eax;
    return eax * 0x5eu + ecx - 0xdc1u;
L_1011c9d7: ;
    if (edx < 0x2f21u) goto L_1011c9e7;
    g->edx = edx;
    return eax + ecx + 0x21eu;
L_1011c9e7: ;
    if (edx < 0x2e21u) goto L_1011c9f7;
    g->edx = edx;
    return eax + ecx + 0x271u;
L_1011c9f7: ;
    if (edx < 0x2e46u) goto L_1011ca07;
    g->edx = edx;
    return eax + ecx + 0x271u;
L_1011ca07: ;
    if (edx < 0x2d5fu) goto L_1011ca17;
    g->edx = edx;
    return eax + ecx + 0x351u;
L_1011ca17: ;
    if (edx < 0x2d40u) goto L_1011ca27;
    g->edx = edx;
    return eax + ecx + 0x359u;
L_1011ca27: ;
    if (edx < 0x2d21u) goto L_1011ca37;
    g->edx = edx;
    return eax + ecx + 0x35au;
L_1011ca37: ;
    if (edx < 0x2a21u) goto L_1011ca47;
    g->edx = edx;
    return eax + ecx + 0x223u;
L_1011ca47: ;
    if (edx < 0x2921u) goto L_1011ca57;
    g->edx = edx;
    return eax + ecx + 0x276u;
L_1011ca57: ;
    if (edx < 0x2821u) goto L_1011ca67;
    g->edx = edx;
    return eax + ecx + 0x203u;
L_1011ca67: ;
    if (edx < 0x2751u) goto L_1011ca77;
    g->edx = edx;
    return eax + ecx + 0x1b3u;
L_1011ca77: ;
    if (edx < 0x2721u) goto L_1011ca87;
    g->edx = edx;
    return eax + ecx + 0x1c2u;
L_1011ca87: ;
    if (edx < 0x2641u) goto L_1011ca97;
    g->edx = edx;
    return eax + ecx + 0x18bu;
L_1011ca97: ;
    if (edx < 0x2621u) goto L_1011caa7;
    g->edx = edx;
    return eax + ecx + 0x193u;
L_1011caa7: ;
    if (edx < 0x2521u) goto L_1011cab7;
    g->edx = edx;
    return eax + ecx + 0x13eu;
L_1011cab7: ;
    if (edx < 0x2421u) goto L_1011cac7;
    g->edx = edx;
    return eax + ecx + 0xecu;
L_1011cac7: ;
    if (edx < 0x2361u) goto L_1011cad7;
    g->edx = edx;
    return eax + ecx + 0x93u;
L_1011cad7: ;
    if (edx < 0x2341u) goto L_1011cae7;
    g->edx = edx;
    return eax + ecx + 0x99u;
L_1011cae7: ;
    if (edx < 0x2330u) goto L_1011caf7;
    g->edx = edx;
    return eax + ecx + 0xa0u;
L_1011caf7: ;
    if (edx != 0x227fu) goto L_1011cb04;
    g->edx = edx;
    return (eax & 0xffff0000u) | 0xf2u;
L_1011cb04: ;
    if (edx < 0x2272u) goto L_1011cb11;
    g->edx = edx;
    return eax + ecx + 0x56u;
L_1011cb11: ;
    if (edx < 0x225cu) goto L_1011cb1e;
    g->edx = edx;
    return eax + ecx + 0x5du;
L_1011cb1e: ;
    if (edx < 0x224au) goto L_1011cb2b;
    g->edx = edx;
    return eax + ecx + 0x68u;
L_1011cb2b: ;
    if (edx < 0x223au) goto L_1011cb38;
    g->edx = edx;
    return eax + ecx + 0x70u;
L_1011cb38: ;
    g->edx = eax * 0x30u - eax;
    return eax * 0x5eu + ecx - 0xbdfu;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1011c940(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1011c940(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
