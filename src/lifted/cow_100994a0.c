/* f_0x100994a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100994a0(Guest* g)
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
    uint32_t t30;
    uint32_t t31;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(arg3 + 4u);
    wr32(COW_IMG(0x10485638u), t1);
    t2 = rd32(arg3 + 8u);
    wr32(COW_IMG(0x1048563cu), t2);
    t3 = rd8(arg3 + 0xcu);
    wr8(COW_IMG(0x10485640u), (uint8_t)t3);
    t4 = rd8(arg3 + 0xdu);
    wr8(COW_IMG(0x10485641u), (uint8_t)t4);
    t5 = rd8(arg3 + 0xeu);
    wr8(COW_IMG(0x10485642u), (uint8_t)t5);
    t6 = rd8(arg3 + 0xfu);
    wr8(COW_IMG(0x10485643u), (uint8_t)t6);
    t7 = rd16(arg3 + 0x10u);
    wr16(COW_IMG(0x10485644u), (uint16_t)t7);
    t8 = rd16(arg3 + 0x12u);
    wr16(COW_IMG(0x10485646u), (uint16_t)t8);
    t9 = rd16(arg3 + 0x30u);
    wr16(COW_IMG(0x10485664u), (uint16_t)t9);
    t10 = rd16(arg3 + 0x32u);
    wr16(COW_IMG(0x10485666u), (uint16_t)t10);
    t11 = rd16(arg3 + 0x44u);
    wr16(COW_IMG(0x10485678u), (uint16_t)t11);
    wr16(COW_IMG(0x1048567au), rd16(arg3 + 0x46u));
    t12 = rd16(arg3 + 0x48u);
    wr16(COW_IMG(0x1048567cu), (uint16_t)t12);
    t13 = rd16(arg3 + 0x4au);
    wr16(COW_IMG(0x1048567eu), (uint16_t)t13);
    t14 = rd32(arg3 + 0x4cu);
    wr32(COW_IMG(0x10485680u), t14);
    t15 = rd8(arg3 + 0x50u);
    wr8(COW_IMG(0x10485684u), (uint8_t)t15);
    t16 = rd8(arg3 + 0x51u);
    wr8(COW_IMG(0x10485685u), (uint8_t)t16);
    t17 = rd8(arg3 + 0x52u);
    wr8(COW_IMG(0x10485686u), (uint8_t)t17);
    t18 = rd8(arg3 + 0x54u);
    wr8(COW_IMG(0x10485688u), (uint8_t)t18);
    wr8(COW_IMG(0x10485689u), rd8(arg3 + 0x55u));
    wr8(COW_IMG(0x1048568au), rd8(arg3 + 0x56u));
    wr8(COW_IMG(0x1048568bu), rd8(arg3 + 0x57u));
    t19 = rd32(arg3 + 0x58u);
    wr32(COW_IMG(0x1048568cu), t19);
    t20 = (t19 & 0xffffff00u) | (t19 & 0x1fu);
    t21 = rd32(arg3 + 0x5cu);
    wr32(COW_IMG(0x10485690u), t21);
    t22 = rd32(arg3 + 0x60u);
    t23 = rd32(COW_IMG(0x104dfd98u));
    wr32(COW_IMG(0x10485694u), t22);
    g->esp = sp0 - 4u;
    cow_thiscall_cdecl(g, COW_IMG(0x100f9920u), t22, 2, t23, t20);
    t24 = rd32(arg3 + 0x64u);
    wr32(COW_IMG(0x10485698u), t24);
    t25 = rd32(arg3 + 0x68u);
    wr32(COW_IMG(0x1048569cu), t25);
    t26 = rd32(arg3 + 0x6cu);
    wr32(COW_IMG(0x104856a0u), t26);
    eax = 0u;
    ecx = arg3 + 0x22u;
    edx = t24;
L_100995c2: ;
    t27 = rd16(ecx - 0xeu);
    wr16(COW_IMG(0x10485648u) + eax, (uint16_t)t27);
    t28 = rd16(ecx);
    wr16(COW_IMG(0x10485656u) + eax, (uint16_t)t28);
    if (eax + 2u < 0xeu)
    {
        eax = eax + 2u;
        ecx = ecx + 2u;
        edx = ((edx | t27) & 0xffff0000u) | t28;
        goto L_100995c2;
    }
    edx = ((edx | t27) & 0xffff0000u) | t28;
    eax = 0u;
    ecx = arg3 + 0x34u;
L_100995e9: ;
    t29 = rd16(ecx);
    wr16(COW_IMG(0x10485668u) + eax, (uint16_t)t29);
    if (eax + 2u < 0x10u)
    {
        eax = eax + 2u;
        ecx = ecx + 2u;
        edx = (edx & 0xffff0000u) | t29;
        goto L_100995e9;
    }
    ecx = ecx + 2u;
    edx = (edx & 0xffff0000u) | t29;
    if (rd32(COW_IMG(0x10487ea4u)) == 0u)
    {
        eax = rd32(COW_IMG(0x10487ea4u));
    }
    else
    {
        eax = rd32(COW_IMG(0x10487ea4u));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0;
        t30 = cow_thiscall(g, eax, ecx, 0);
        t31 = g->edx;
        eax = t30;
        edx = t31;
    }
    wr32(COW_IMG(0x10487ea4u), 0u);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100994a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100994a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
