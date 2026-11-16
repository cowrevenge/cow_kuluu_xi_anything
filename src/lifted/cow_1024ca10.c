/* f_0x1024ca10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1024ca10(Guest* g)
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint16_t)arg1 != 5u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        g->edx = in_edx;
        g->esp = sp0;
        t1 = cow_thiscall(g, COW_IMG(0x1024c940u), rd32(COW_IMG(0x10669140u)), 0);
        t2 = g->edx;
        if ((int32_t)t1 < 1)
        {
            eax = t1;
            edx = t2;
        }
        else
        {
            eax = t1;
            edx = t2;
            if ((int32_t)eax < 24)
            {
                if ((uint16_t)arg2 != 1u) goto L_1024ca93;
                wr32(COW_IMG(0x10669138u), eax);
                g->edx = edx;
                g->esp = sp0;
                cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x103715f8u));
                t3 = g->edx;
                if (rd32(COW_IMG(0x105783ecu)) == 0u)
                {
                    eax = rd32(COW_IMG(0x105783ecu));
                    edx = t3;
                    goto L_1024caf0;
                }
                eax = rd32(COW_IMG(0x105783ecu));
                edx = t3;
                g->edx = edx;
                g->esp = sp0;
                cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x103718d8u));
                t4 = g->edx;
                g->edx = t4;
                cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x103718d8u), 1u, 0u);
                t5 = g->edx;
                g->edx = t5;
                t6 = rd32(COW_IMG(0x105783ecu));
                cow_thiscall(g, rd32(rd32(t6) + 0x44u), t6, 1, 1u);
                t7 = g->ecx;
                t8 = g->edx;
                ecx = t7;
                edx = t8;
L_1024cad5: ;
                t16 = rd32(COW_IMG(0x105783ecu));
                t17 = rd8(COW_IMG(0x1066913cu));
                t18 = rd8(COW_IMG(0x10669138u));
                wr8(t16 + 0x18u, 1u);
                wr8(t16 + 0x15u, (uint8_t)t18);
                wr8(t16 + 0x16u, (uint8_t)t17);
                eax = t16;
                edx = (edx & 0xffffff00u) | t18;
            }
        }
    }
L_1024caf0: ;
    g->edx = edx;
    return eax;
L_1024ca93: ;
    wr32(COW_IMG(0x1066913cu), eax);
    g->edx = edx;
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x103715f8u));
    t9 = g->edx;
    if (rd32(COW_IMG(0x105783ecu)) == 0u)
    {
        eax = rd32(COW_IMG(0x105783ecu));
        edx = t9;
        goto L_1024caf0;
    }
    eax = rd32(COW_IMG(0x105783ecu));
    edx = t9;
    g->edx = edx;
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x103718d8u));
    t10 = g->edx;
    t11 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x103718d8u), 1u, 0u);
    g->edx = rd32(rd32(COW_IMG(0x105783ecu)));
    t12 = rd32(COW_IMG(0x105783ecu));
    t13 = rd32(rd32(COW_IMG(0x105783ecu)));
    cow_thiscall(g, rd32(t13 + 0x44u), t12, 1, 1u);
    t14 = g->ecx;
    t15 = g->edx;
    ecx = t14;
    edx = t15;
    goto L_1024cad5;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1024ca10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1024ca10(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
