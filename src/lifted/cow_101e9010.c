/* f_0x101e9010 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_101e9010(Guest* g)
{
    double d11;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t12;
    uint32_t t13;
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
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg3 != (uint32_t)(int8_t)rd8(self + 0x18u)) goto L_101e9038;
    eax = (uint32_t)(int8_t)rd8(self + 0x18u);
    if (rd8(self + 0x14u) == 0u) goto L_101e9038;
    eax = rd8(self + 0x19u) << 0x18u | 0x808080u;
L_101e903d: ;
    g->eax = eax;
    g->edx = (uint32_t)(int16_t)arg1;
    t1 = rd32(arg3 * 4u + self + 0x40u);
    g->esp = sp0 - 0x10u;
    t2 = cow_thiscall(g, COW_IMG(0x1011fb60u), t1, 5, (uint32_t)(int16_t)arg1, (uint32_t)(int16_t)arg2, eax, 0u, 0u);
    t3 = g->ecx;
    t4 = g->edx;
    if (rd8(self + 0x14u) == 0u)
    {
        ecx = t3;
        goto L_101e90d4;
    }
    ecx = t3;
    edx = t4;
    if (arg3 == (uint32_t)(int8_t)rd8(self + 0x18u))
    {
        eax = (uint32_t)(int8_t)rd8(self + 0x18u);
        goto L_101e90a2;
    }
    eax = (uint32_t)(int8_t)rd8(self + 0x18u);
    if ((int32_t)arg3 >= 3) goto L_101e908d;
    t5 = rd32(arg3 * 4u + self + 0x58u);
    g->edi = arg2 + 0xdu;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x101cb040u), 4, arg1 + 0x14u, arg2 + 0xdu, t5, 1u);
    g->edi = in_edi;
    return;
L_101e9038: ;
    eax = 0x80808080u;
    goto L_101e903d;
L_101e908d: ;
    t6 = rd32(self + 0x64u);
    g->edi = arg2 + 0xdu;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x101cb040u), 4, arg1 + 0x14u, arg2 + 0xdu, t6, 1u);
    g->edi = in_edi;
    return;
L_101e90a2: ;
    if ((int32_t)arg3 >= 3) goto L_101e90bf;
    t7 = rd32(arg3 * 4u + self + 0x58u);
    g->edi = arg2 + 0xdu;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x101cb040u), 4, arg1 + 0x14u, arg2 + 0xdu, t7, 0u);
    g->edi = in_edi;
    return;
L_101e90bf: ;
    t8 = rd32(self + 0x64u);
    g->edi = arg2 + 0xdu;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x101cb040u), 4, arg1 + 0x14u, arg2 + 0xdu, t8, 0u);
    g->edi = in_edi;
    return;
L_101e90d4: ;
    t9 = (uint32_t)(int16_t)(arg2 + 0xdu) - 2u;
    t10 = (uint32_t)(int16_t)(arg1 + 0x14u) + 0xau;
    g->edx = t9;
    d11 = (double)rdf32(arg3 * 4u + self + 0x58u);
    fpush(g, d11);
    g->esp = sp0 - 0x24u;
    t12 = cow_call_regs(g, COW_IMG(0x10311c6cu), t10, g->ecx, g->edx, 1, 0);
    t13 = g->edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(self + t12 * 4u + 0x20u), 5, t10, t9, 0x80808080u, 0u, 0u);
    g->edi = in_edi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e9010(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101e9010(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
