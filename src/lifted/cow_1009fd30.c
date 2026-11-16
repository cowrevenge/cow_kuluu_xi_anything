/* f_0x1009fd30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1009fd30(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
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
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
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
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(COW_IMG(0x10487ee4u)) != 0u)
    {
        eax = rd32(COW_IMG(0x10487ee4u));
        edx = in_edx;
        goto L_1009febe;
    }
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0;
    t1 = cow_cdecl(g, COW_IMG(0x10311bfbu), 1, 8u);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(COW_IMG(0x10487ee4u), t1);
    g->edx = t3;
    g->esp = sp0 - 4u;
    t4 = cow_cdecl(g, COW_IMG(0x10311bfbu), 1, 0x38u);
    t5 = g->edx;
    t6 = rd32(COW_IMG(0x10487ee4u));
    wr32(COW_IMG(0x10487ee8u), t4);
    if (t6 == 0u)
    {
        eax = t4;
        ecx = t6;
        edx = t5;
        goto L_1009fea7;
    }
    eax = t4;
    ecx = t6;
    edx = t5;
    if (eax == 0u) goto L_1009fe8f;
    t7 = rd32(arg3 + 0x14u);
    wr32(ecx, t7);
    t8 = rd16(arg3 + 4u);
    wr32(rd32(COW_IMG(0x10487ee8u)) + 8u, t8);
    t9 = rd32(rd32(COW_IMG(0x10487ee8u)) + 8u);
    wr32(rd32(COW_IMG(0x10487ee8u)) + 4u, t9);
    t10 = rd32(rd32(COW_IMG(0x10487ee8u)) + 4u);
    t11 = rd32(COW_IMG(0x10487ee8u));
    wr32(t11, t10);
    if (rd16(arg3 + 6u) == 0u)
    {
        ecx = 1u;
    }
    else
    {
        ecx = (t11 & 0xffff0000u) | rd16(arg3 + 6u);
        ecx = (uint16_t)ecx;
    }
    wr32(rd32(COW_IMG(0x10487ee8u)) + 0xcu, ecx);
    t12 = rd16(arg3 + 8u) - 0x80u;
    wr32(rd32(COW_IMG(0x10487ee8u)) + 0x10u, t12);
    if (rd16(arg3 + 0xau) == 0u)
    {
        wr16(arg3 + 0xau, 1u);
    }
    t13 = rd16(arg3 + 0xau) * 0x14u;
    wr32(rd32(COW_IMG(0x10487ee8u)) + 0x14u, t13);
    t14 = rd16(arg3 + 0xcu);
    wr32(rd32(COW_IMG(0x10487ee8u)) + 0x18u, t14);
    t15 = rd16(arg3 + 0xeu);
    wr32(rd32(COW_IMG(0x10487ee8u)) + 0x1cu, t15);
    t16 = rd16(arg3 + 0x10u) * 0x3cu;
    t17 = rd32(COW_IMG(0x10487ee8u));
    wr32(t17 + 0x20u, t16);
    wr32(rd32(COW_IMG(0x10487ee8u)) + 0x24u, 0u);
    t18 = rd8(arg3 + 0x12u) & 1u;
    wr32(rd32(COW_IMG(0x10487ee8u)) + 0x28u, t18);
    t19 = rd8(arg3 + 0x12u) >> 1u & 1u;
    wr32(rd32(COW_IMG(0x10487ee8u)) + 0x2cu, t19);
    if (rd32(rd32(COW_IMG(0x10487ee8u)) + 0x2cu) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x10487ee8u)) + 0x2cu);
        edx = t19;
        goto L_1009febe;
    }
    eax = rd32(rd32(COW_IMG(0x10487ee8u)) + 0x2cu);
    ecx = rd32(COW_IMG(0x10487ee8u));
    edx = t19;
    g->edx = edx;
    g->esp = sp0;
    t20 = cow_call_regs(g, COW_IMG(0x101cc4f0u), eax, g->ecx, g->edx, 1, 0);
    t21 = g->edx;
    if (t20 == 0u)
    {
        eax = t20;
        edx = t21;
        goto L_1009febe;
    }
    eax = t20;
    edx = t21;
    if (rd32(eax + 0xa0u) == 0u) goto L_1009febe;
    ecx = rd32(eax + 0xa0u);
    g->eax = eax;
    g->edx = rd32(ecx);
    t22 = rd32(ecx);
    g->esp = sp0;
    t23 = cow_thiscall(g, rd32(t22 + 0x2c4u), ecx, 5, 0x389u, ecx, 0x6e69616du, 0u, 0u);
    t24 = g->edx;
    g->edx = t24;
    return (t23 & 0xffffff00u) | 1u;
L_1009fe8f: ;
    g->esp = sp0;
    cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, ecx);
    t25 = g->ecx;
    t26 = g->edx;
    t27 = rd32(COW_IMG(0x10487ee8u));
    wr32(COW_IMG(0x10487ee4u), 0u);
    eax = t27;
    ecx = t25;
    edx = t26;
L_1009fea7: ;
    if (eax != 0u)
    {
        g->eax = eax;
        g->esp = sp0;
        t28 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
        t29 = g->edx;
        wr32(COW_IMG(0x10487ee8u), 0u);
        eax = t28;
        edx = t29;
    }
L_1009febe: ;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1009fd30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1009fd30(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
