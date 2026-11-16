/* f_0x10116de0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10116de0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((rd32(arg2 + 8u) & 0x7fffffffu) - 3u > 0x20u) goto L_10116f50;
    eax = (rd32(arg2 + 8u) & 0x7fffffffu) - 3u;
    t1 = rd32(COW_IMG(0x10116f5cu) + rd8(COW_IMG(0x10116f74u) + eax) * 4u);
    switch (t1 - RD)
    {
    case 0x10116e0bu: ecx = rd8(COW_IMG(0x10116f74u) + eax); goto L_10116e0b;
    case 0x10116e44u: goto L_10116e44;
    case 0x10116e81u: ecx = rd8(COW_IMG(0x10116f74u) + eax); goto L_10116e81;
    case 0x10116ea5u: goto L_10116ea5;
    case 0x10116eedu: ecx = rd8(COW_IMG(0x10116f74u) + eax); goto L_10116eed;
    case 0x10116f50u: goto L_10116f50;
    default: rt_fatal(g, COW_IMG(0x10116e04u), "switch");
    }
    return 0;
L_10116e0b: ;
    t18 = rd32(arg2 + 0x1cu);
    wr32(arg1 + 0x138u, t18);
    g->ebx = arg2;
    g->esp = sp0 - 0x10u;
    t19 = cow_cdecl(g, COW_IMG(0x10116d30u), 2, arg1, t18);
    wr32(arg1 + 0x138u, t19);
    t20 = rd32(arg2 + 0x20u);
    wr32(arg1 + 0x1a20u, t20);
    t21 = rd32(arg2 + 0x24u);
    wr32(arg1 + 0x1a24u, t21);
    g->ebx = in_ebx;
    return 1u;
L_10116e44: ;
    t15 = rd32(arg2 + 0x1cu);
    wr32(arg1 + 0x144u, t15);
    if (rd32(arg2 + 0x1cu) == 0u)
    {
        ecx = t15;
        goto L_10116e85;
    }
    eax = arg2 + 0x20u;
    edx = arg1 + 0x148u;
    ebp = 0u;
L_10116e63: ;
    esi = eax;
    edi = edx;
    ecx = 0x23u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    if (ebp + 1u < rd32(arg2 + 0x1cu))
    {
        eax = eax + 0x8cu;
        edx = edx + 0x8cu;
        ebp = ebp + 1u;
        goto L_10116e63;
    }
    ecx = rd32(arg2 + 0x1cu);
L_10116e81: ;
L_10116e85: ;
    t16 = rd32(arg1 + 0x138u);
    g->ebx = arg2;
    g->esp = sp0 - 0x10u;
    t17 = cow_cdecl(g, COW_IMG(0x10116d30u), 2, arg1, t16);
    wr32(arg1 + 0x138u, t17);
    g->ebx = in_ebx;
    return 1u;
L_10116ea5: ;
    t9 = rd32(arg2 + 0x38u);
    wr32(arg1 + 0x124u, t9);
    t10 = rd32(arg2 + 0x3cu);
    wr32(arg1 + 0x128u, t10);
    t11 = rd32(arg2 + 0x40u);
    t12 = rd32(arg1 + 0x138u);
    wr32(arg1 + 0x12cu, t11);
    t13 = rd32(arg2 + 0x44u);
    wr32(arg1 + 0x130u, t13);
    g->ebx = arg2;
    g->esp = sp0 - 0x10u;
    t14 = cow_cdecl(g, COW_IMG(0x10116d30u), 2, arg1, t12);
    wr32(arg1 + 0x138u, t14);
    g->ebx = in_ebx;
    return 1u;
L_10116eed: ;
    t2 = rd32(arg1 + 0x138u);
    g->ebx = arg2;
    g->esp = sp0 - 0x10u;
    t3 = cow_cdecl(g, COW_IMG(0x10116d30u), 2, arg1, t2);
    wr32(arg1 + 0x138u, t3);
    t4 = rd32(arg2 + 0x1cu);
    wr32(arg1 + 0xa64u, t4);
    if (rd32(arg2 + 0x1cu) != 0u)
    {
        eax = arg2 + 0x24u;
        ecx = arg1 + 0xa6cu;
        edx = 0u;
L_10116f22: ;
        t5 = rd32(eax - 4u);
        wr32(ecx - 4u, t5);
        wr32(ecx, rd32(eax));
        t6 = rd32(eax + 4u);
        wr32(ecx + 4u, t6);
        t7 = rd32(eax + 8u);
        wr32(ecx + 8u, t7);
        t8 = rd32(eax + 0xcu);
        wr32(ecx + 0xcu, t8);
        if (edx + 1u < rd32(arg2 + 0x1cu))
        {
            eax = eax + 0x14u;
            ecx = ecx + 0x14u;
            edx = edx + 1u;
            goto L_10116f22;
        }
    }
L_10116f50: ;
    g->ebx = in_ebx;
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10116de0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10116de0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
