/* f_0x100b84b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b84b0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t self = g->ecx;

    t1 = rd8(rd16(self + 0x256u) + rd32(self + 0x20u) + 1u);
    if (t1 == 0u)
    {
        eax = t1;
        edx = t1;
        goto L_100b857a;
    }
    eax = t1;
    edx = t1;
    if (eax != 1u) goto L_100b85ec;
    eax = eax - 1u;
    if (rd8(COW_IMG(0x104886f5u)) == 0u) goto L_100b85ec;
    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x104886f5u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t2 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
    t3 = g->edx;
    if ((int32_t)t2 >= 100)
    {
        eax = t2;
        edx = t3;
        g->eax = eax;
        g->esp = sp0 - 8u;
        t5 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
        ecx = rd8(t5 + rd32(COW_IMG(0x10487e78u)) - 0x64u);
        edx = rd32(COW_IMG(0x10487e78u));
    }
    else
    {
        eax = t2;
        edx = t3;
        g->eax = eax;
        g->esp = sp0 - 8u;
        t4 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
        ecx = rd8(t4 + rd32(COW_IMG(0x10487e74u)));
        edx = rd32(COW_IMG(0x10487e74u));
    }
    g->eax = ecx * 0x2du;
    g->esp = sp0 - 8u;
    t6 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 4u);
    t7 = cow_divs(g, t6, 0x870u);
    t8 = cow_mods(g, t6, 0x870u);
    eax = COW_IMG(0x10488800u);
    ecx = ecx * 0x1950u + t8 * 3u + rd32(COW_IMG(0x10487e8cu));
    esi = rd32(COW_IMG(0x10487e8cu));
L_100b854d: ;
    t9 = rd8(ecx);
    wr32(eax, t9);
    if ((int32_t)(eax + 4u) < (int32_t)COW_IMG(0x1048880cu))
    {
        eax = eax + 4u;
        ecx = ecx + 1u;
        goto L_100b854d;
    }
    eax = eax + 4u;
    ecx = ecx + 1u;
    edx = t9;
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, esi);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 6u));
    wr8(self + 0x25au, 1u);
    return;
L_100b857a: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t10 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
    t11 = g->edx;
    if ((int32_t)t10 < 100)
    {
        eax = t10;
        edx = t11;
        esi = 0x1b79u;
    }
    else
    {
        eax = t10;
        edx = t11;
        esi = 0x1b7du;
    }
    t12 = rd32(COW_IMG(0x10662dccu));
    wr8(COW_IMG(0x104886f5u), 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t13 = cow_thiscall(g, COW_IMG(0x101c4820u), t12, 6, esi, 0u, 0u, COW_IMG(0x104886f5u), COW_IMG(0x100b8600u), 0u);
    t14 = g->ecx;
    t15 = g->edx;
    if ((int32_t)t13 >= 0) goto L_100b85e4;
    eax = t13;
    ecx = t14;
    edx = t15;
    g->esp = sp0 - 0x10u;
    cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    wr8(COW_IMG(0x104886f5u), 0xffu);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 0xau));
    wr8(self + 0x25au, 1u);
    return;
L_100b85e4: ;
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 4u));
L_100b85ec: ;
    wr8(self + 0x25au, 1u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b84b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100b84b0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
