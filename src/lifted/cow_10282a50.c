/* f_0x10282a50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10282a50(Guest* g)
{
    double d1;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t in_edx = g->edx;

    g->edx = in_edx;
    d1 = fr(g, fr(g, (double)rdf32(sp0 + 4u) * (double)rdf32(COW_IMG(0x10329a20u))) + rdf64(COW_IMG(0x1032ab90u)));
    fpush(g, d1);
    g->esp = sp0 - 4u;
    t2 = cow_call_regs(g, COW_IMG(0x10311c6cu), in_eax, g->ecx, g->edx, 1, 0);
    t3 = g->edx;
    if ((int32_t)t2 <= 255)
    {
        edx = t3;
        esi = t2;
    }
    else
    {
        edx = t3;
        esi = 0xffu;
    }
    if (rd32(rd32(COW_IMG(0x1099d200u)) + 0xb18u) != 0u)
    {
        eax = rd32(COW_IMG(0x1066941cu));
        ecx = rd32(rd32(COW_IMG(0x1099d200u)) + 0xb18u);
        goto L_10282ad1;
    }
    eax = rd32(COW_IMG(0x1066941cu));
    t4 = rd32(eax);
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(t4 + 0xc8u), t4, 3, eax, 0x1bu, 1u);
    t5 = g->ecx;
    g->edx = rd32(rd32(COW_IMG(0x1066941cu)));
    t6 = rd32(rd32(COW_IMG(0x1066941cu)));
    cow_thiscall(g, rd32(t6 + 0xc8u), t5, 3, rd32(COW_IMG(0x1066941cu)), 0xabu, 1u);
    t7 = g->edx;
    t8 = rd32(rd32(COW_IMG(0x1066941cu)));
    cow_thiscall(g, rd32(t8 + 0xc8u), t8, 3, rd32(COW_IMG(0x1066941cu)), 0x13u, 2u);
    t9 = g->ecx;
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0xc8u), t9, 3, rd32(COW_IMG(0x1066941cu)), 0x14u, 2u);
    return;
L_10282ad1: ;
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(rd32(eax) + 0xfcu), ecx, 4, eax, ecx, 1u, 0xeu);
    t10 = rd32(rd32(COW_IMG(0x1099d200u)) + 0xb18u);
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0xfcu), rd32(rd32(COW_IMG(0x1066941cu))), 4, rd32(COW_IMG(0x1066941cu)), t10, 2u, 2u);
    t11 = rd32(rd32(COW_IMG(0x1099d200u)) + 0xb18u);
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0xfcu), rd32(rd32(COW_IMG(0x1066941cu))), 4, rd32(COW_IMG(0x1066941cu)), t11, 3u, 1u);
    t12 = rd32(rd32(COW_IMG(0x1099d200u)) + 0xb18u);
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0xfcu), rd32(rd32(COW_IMG(0x1066941cu))), 4, rd32(COW_IMG(0x1066941cu)), t12, 4u, 2u);
    t13 = rd32(rd32(COW_IMG(0x1099d200u)) + 0xb18u);
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0xfcu), rd32(rd32(COW_IMG(0x1066941cu))), 4, rd32(COW_IMG(0x1066941cu)), t13, 5u, 2u);
    t14 = rd32(rd32(COW_IMG(0x1099d200u)) + 0xb18u);
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0xfcu), rd32(rd32(COW_IMG(0x1066941cu))), 4, rd32(COW_IMG(0x1066941cu)), t14, 6u, 1u);
    t15 = ((esi << 8u | (uint8_t)esi) << 8u | (uint8_t)esi) << 8u | (uint8_t)esi;
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0xc8u), rd32(COW_IMG(0x1066941cu)), 3, rd32(COW_IMG(0x1066941cu)), 0x3cu, t15);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10282a50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10282a50(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
