/* f_0x101df020 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101df020(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (!(rd8(COW_IMG(0x10485824u)) & 1u)) goto L_101df117;
    eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x10485824u));
    if (rd8(COW_IMG(0x10485640u)) == 0x10u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10485640u));
        ecx = (self & 0xffffff00u) | rd8(COW_IMG(0x10485642u));
        goto L_101df04c;
    }
    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10485640u));
    ecx = (self & 0xffffff00u) | rd8(COW_IMG(0x10485642u));
    if ((uint8_t)ecx != 0x10u) goto L_101df117;
    if ((uint8_t)eax != (uint8_t)ecx) goto L_101df069;
L_101df04c: ;
    wr8(self + 0x5cu, 0u);
    t5 = (eax & 0xffffff00u) | rd8(COW_IMG(0x10485641u));
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t6 = cow_cdecl(g, COW_IMG(0x10101bc0u), 1, t5);
    t7 = g->edx;
    wr8(self + 0x5fu, (uint8_t)t6);
    ecx = rd8(COW_IMG(0x10485641u));
    edx = t7;
    loc_c = rd8(COW_IMG(0x10485641u));
L_101df08d: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t8 = cow_cdecl(g, COW_IMG(0x101df130u), 1, loc_c);
    t9 = g->edx;
    wr8(self + 0x5eu, (uint8_t)t8);
    wr8(rd32(COW_IMG(0x105783e4u)) + 0x1cu, 2u);
    g->edx = t9;
    g->esp = sp0 - 4u;
    t10 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1036f818u), 1u, 0u);
    t11 = g->edx;
    t12 = cow_fastcall(g, COW_IMG(0x101ec220u), rd32(COW_IMG(0x106636a0u)), t11, 4, 0xfffffc19u, 0xfffffc19u, 0u, 0u);
    t13 = rd32(COW_IMG(0x106634a8u));
    cow_fastcall(g, COW_IMG(0x101ebf10u), rd32(COW_IMG(0x1066369cu)), t13, 4, t13, 0xfffffc19u, 0xfffffc19u, 0x81u);
    t14 = g->edx;
    g->edx = t14;
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1037f220u), 1u, 0u);
    t15 = g->edx;
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1037f20cu), 1u, 0u);
    return;
L_101df069: ;
    if ((uint8_t)ecx != 0x10u) goto L_101df124;
    wr8(self + 0x5cu, 1u);
    t1 = (in_edx & 0xffffff00u) | rd8(COW_IMG(0x10485643u));
    g->ecx = ecx;
    g->edx = t1;
    g->esp = sp0 - 4u;
    t2 = cow_cdecl(g, COW_IMG(0x10101bc0u), 1, t1);
    t3 = g->ecx;
    t4 = g->edx;
    wr8(self + 0x5fu, (uint8_t)t2);
    ecx = t3;
    edx = t4;
    loc_c = rd8(COW_IMG(0x10485643u));
    goto L_101df08d;
L_101df117: ;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0x57u);
L_101df124: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101df020(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101df020(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
