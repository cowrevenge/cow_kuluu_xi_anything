/* f_0x101499f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101499f0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_14;
    uint32_t loc_4;
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
    uint32_t t22;
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

    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall(g, COW_IMG(0x101490c0u), rd32(COW_IMG(0x10578408u)), 0);
    t2 = g->edx;
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x10149130u), rd32(COW_IMG(0x10578408u)), 0);
    t4 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        eax = t3;
        edx = t4;
        ebx = (in_ebx & 0xffffff00u) | (uint8_t)t1;
        loc_4 = (self & 0xffffffu) | (uint8_t)t3 << 0x18u;
        goto L_10149a1f;
    }
    eax = t3;
    edx = t4;
    ebx = (in_ebx & 0xffffff00u) | (uint8_t)t1;
    loc_4 = (self & 0xffffffu) | (uint8_t)t3 << 0x18u;
    if ((uint8_t)eax == 0u) goto L_10149a29;
    if (rd32(self + 0x14u) == 1u) goto L_10149a29;
L_10149a1f: ;
    if ((uint8_t)eax != 0u) goto L_10149a6f;
    if (rd32(self + 0x14u) != 2u) goto L_10149a6f;
L_10149a29: ;
    t5 = rd32(COW_IMG(0x10578438u));
    wr8(t5 + 0x3au, 0u);
    wr32(t5 + 0x14u, 0u);
    t6 = rd32(t5 + 8u);
    g->esp = sp0 - 0xcu;
    t7 = cow_call_regs(g, COW_IMG(0x1015e790u), t6, COW_IMG(0x10621838u), g->edx, 0, 2, t6, 1u);
    t8 = rd32(rd32(COW_IMG(0x10666ea4u)) + 8u);
    g->edx = t8;
    cow_call_regs(g, COW_IMG(0x1015e790u), t7, COW_IMG(0x10621838u), g->edx, 0, 2, t8, 1u);
    t9 = g->edx;
    t10 = rd32(self + 8u);
    g->edx = t9;
    t11 = cow_call_regs(g, COW_IMG(0x1015e790u), t10, COW_IMG(0x10621838u), g->edx, 0, 2, t10, 1u);
    t12 = g->edx;
    eax = t11;
    edx = t12;
L_10149a6f: ;
    if ((uint8_t)ebx != 0u)
    {
        ecx = rd32(self + 8u);
        goto L_10149a7c;
    }
    ecx = rd32(self + 8u);
    loc_14 = 5u;
L_10149a8d: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t15 = cow_thiscall(g, COW_IMG(0x10118b60u), ecx, 2, loc_14, 1u);
    t16 = g->edx;
    eax = t15;
    edx = t16;
L_10149a92: ;
    if (loc_4 >> 0x18u != 0u)
    {
        eax = (eax & 0xffffff00u) | loc_4 >> 0x18u;
        ecx = rd32(self + 8u);
        goto L_10149aac;
    }
    eax = (eax & 0xffffff00u) | loc_4 >> 0x18u;
    ecx = rd32(self + 8u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t17 = cow_thiscall(g, COW_IMG(0x10118b60u), ecx, 2, 5u, 2u);
    t18 = g->edx;
    g->edx = t18;
    return t17;
L_10149a7c: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t13 = cow_thiscall(g, COW_IMG(0x10118bc0u), ecx, 1, 1u);
    t14 = g->edx;
    if (t13 != 5u)
    {
        eax = t13;
        edx = t14;
        goto L_10149a92;
    }
    eax = t13;
    edx = t14;
    ecx = rd32(self + 8u);
    loc_14 = 0xbu;
    goto L_10149a8d;
L_10149aac: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t19 = cow_thiscall(g, COW_IMG(0x10118bc0u), ecx, 1, 2u);
    t20 = g->edx;
    if (t19 != 5u)
    {
        eax = t19;
        edx = t20;
    }
    else
    {
        eax = t19;
        edx = t20;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t21 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 0xbu, 2u);
        t22 = g->edx;
        eax = t21;
        edx = t22;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101499f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101499f0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
