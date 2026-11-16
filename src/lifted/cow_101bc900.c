/* f_0x101bc900 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101bc900(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t edx;
    uint32_t of;
    uint32_t sf;
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
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->edx = in_edx;
    t1 = rd32(self + 8u);
    g->esp = sp0 - 0xcu;
    t2 = cow_thiscall(g, COW_IMG(0x101bc9b0u), arg1, 0);
    t3 = g->edx;
    if (t2 == t1)
    {
        edx = t3;
        ebx = t1;
        goto L_101bc922;
    }
    return 1u;
L_101bc922: ;
    if ((int8_t)rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) >= 0)
    {
        eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        goto L_101bc93c;
    }
    eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
    if (eax == 2u) goto L_101bc980;
    if (eax == 3u) goto L_101bc980;
L_101bc93c: ;
    if (eax == 1u) goto L_101bc980;
    zf = eax == 1u;
    sf = (int32_t)(eax - 1u) < 0;
    of = ((eax ^ 1u) & (eax ^ eax - 1u)) >> 0x1fu;
    if (zf || sf != of) goto L_101bc965;
    if ((int32_t)eax > 3) goto L_101bc965;
    t4 = rd32(self + 4u);
    g->eax = t4;
    g->edx = rd32(arg1);
    t5 = rd32(arg1);
    g->esp = sp0 - 0x18u;
    t6 = cow_thiscall(g, rd32(t5 + 0x10u), arg1, 0);
    t7 = g->ecx;
    t8 = g->edx;
    g->esp = sp0 - 0xcu;
    t9 = cow_call_regs(g, COW_IMG(0x101c88a0u), t6, g->ecx, t8, 1, 4, t6, t4, ebx, 1u);
    return t9;
L_101bc965: ;
    t10 = rd32(self + 4u);
    g->eax = t10;
    g->edx = rd32(arg1);
    t11 = rd32(arg1);
    g->esp = sp0 - 0x14u;
    t12 = cow_thiscall(g, rd32(t11 + 0x10u), arg1, 0);
    t13 = g->ecx;
    t14 = g->edx;
    g->esp = sp0 - 4u;
    t15 = cow_cdecl(g, COW_IMG(0x10312980u), 5, t12, t10, ebx, in_edi, in_esi);
    return t15;
L_101bc980: ;
    t16 = rd32(self + 4u);
    g->eax = t16;
    g->edx = rd32(arg1);
    t17 = rd32(arg1);
    g->esp = sp0 - 0x14u;
    t18 = cow_thiscall(g, rd32(t17 + 0x10u), arg1, 0);
    t19 = g->ecx;
    t20 = g->edx;
    g->ebx = ebx;
    g->esp = sp0 - 4u;
    t21 = cow_call_regs(g, COW_IMG(0x10325d40u), g->eax, g->ecx, t20, 1, 5, t18, t16, ebx, in_edi, in_esi);
    g->ebx = in_ebx;
    return t21;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101bc900(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101bc900(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
