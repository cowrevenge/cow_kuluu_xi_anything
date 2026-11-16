/* f_0x1031b4ce - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1031b4ce(Guest* g)
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
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 4676u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x1234u, in_ebx);
    wr32(sp0 - 0x1238u, sp0 - 0x9cu);
    wr32(sp0 - 0x9cu, 0x94u);
    g->eax = sp0 - 0x9cu;
    g->edx = in_edx;
    g->esp = sp0 - 0x1234u;
    t1 = cow_thiscall(g, rd32(COW_IMG(0x103291a8u)), self, 1, sp0 - 0x9cu);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        ecx = t2;
        edx = t3;
        goto L_1031b511;
    }
    ecx = t2;
    edx = t3;
    if (rd32(sp0 - 0x8cu) != 2u) goto L_1031b511;
    if (rd32(sp0 - 0x98u) < 5u) goto L_1031b511;
    wr32(sp0 - 0x1238u, 1u);
    eax = 1u;
L_1031b613: ;
    g->ebx = in_ebx;
    return eax;
L_1031b511: ;
    wr32(sp0 - 0x1238u, 0x1090u);
    wr32(sp0 - 0x123cu, sp0 - 0x1230u);
    wr32(sp0 - 0x1240u, COW_IMG(0x1034a3e8u));
    g->eax = sp0 - 0x1230u;
    g->edx = edx;
    g->esp = sp0 - 0x1234u;
    t4 = cow_thiscall(g, rd32(COW_IMG(0x103290c0u)), ecx, 3, COW_IMG(0x1034a3e8u), sp0 - 0x1230u, 0x1090u);
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 == 0u)
    {
        ecx = t5;
        edx = t6;
        goto L_1031b600;
    }
    eax = t4;
    edx = t6;
    if (rd8(sp0 - 0x1230u) == 0u)
    {
        ecx = sp0 - 0x1230u;
        goto L_1031b553;
    }
    ecx = sp0 - 0x1230u;
L_1031b540: ;
    if ((int8_t)rd8(ecx) < 97)
    {
        eax = (eax & 0xffffff00u) | rd8(ecx);
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(ecx);
        if ((int8_t)eax <= 122)
        {
            wr8(ecx, (uint8_t)((uint8_t)eax - 0x20u));
            eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax - 0x20u);
        }
    }
    if (rd8(ecx + 1u) != 0u)
    {
        ecx = ecx + 1u;
        goto L_1031b540;
    }
    ecx = ecx + 1u;
L_1031b553: ;
    wr32(sp0 - 0x1238u, 0x16u);
    wr32(sp0 - 0x123cu, sp0 - 0x1230u);
    wr32(sp0 - 0x1240u, COW_IMG(0x1034a3d0u));
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x122cu;
    t7 = cow_cdecl(g, COW_IMG(0x10312980u), 5, COW_IMG(0x1034a3d0u), sp0 - 0x1230u, 0x16u, rd32(sp0 - 0x1234u), rd32(sp0 - 0x1230u));
    t8 = g->ecx;
    t9 = g->edx;
    if (t7 != 0u)
    {
        ecx = t8;
        edx = t9;
        wr32(sp0 - 0x1238u, 0x104u);
        wr32(sp0 - 0x123cu, sp0 - 0x1a0u);
        wr32(sp0 - 0x1240u, 0u);
        g->eax = sp0 - 0x1a0u;
        g->edx = edx;
        g->esp = sp0 - 0x1234u;
        t10 = cow_thiscall(g, rd32(COW_IMG(0x10329150u)), ecx, 3, 0u, sp0 - 0x1a0u, 0x104u);
        t11 = g->edx;
        if (rd8(sp0 - 0x1a0u) == 0u)
        {
            ecx = sp0 - 0x1a0u;
            edx = t11;
            goto L_1031b5a9;
        }
        eax = t10;
        ecx = sp0 - 0x1a0u;
        edx = t11;
L_1031b596: ;
        if ((int8_t)rd8(ecx) < 97)
        {
            eax = (eax & 0xffffff00u) | rd8(ecx);
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(ecx);
            if ((int8_t)eax <= 122)
            {
                wr8(ecx, (uint8_t)((uint8_t)eax - 0x20u));
                eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax - 0x20u);
            }
        }
        if (rd8(ecx + 1u) != 0u)
        {
            ecx = ecx + 1u;
            goto L_1031b596;
        }
        ecx = ecx + 1u;
L_1031b5a9: ;
        wr32(sp0 - 0x1238u, sp0 - 0x1a0u);
        wr32(sp0 - 0x123cu, sp0 - 0x1230u);
        g->esp = sp0 - 0x1220u;
        t12 = cow_call_regs(g, COW_IMG(0x10311ef0u), sp0 - 0x1230u, g->ecx, edx, 1, 7, sp0 - 0x1230u, sp0 - 0x1a0u, rd32(sp0 - 0x1234u), rd32(sp0 - 0x1230u), rd32(sp0 - 0x122cu), rd32(sp0 - 0x1228u), rd32(sp0 - 0x1224u));
        t13 = g->edx;
        eax = t12;
        ecx = sp0 - 0x1a0u;
        edx = t13;
    }
    else
    {
        ecx = t8;
        edx = t9;
        eax = sp0 - 0x1230u;
    }
    if (eax == 0u) goto L_1031b600;
    wr32(sp0 - 0x1238u, 0x2cu);
    wr32(sp0 - 0x123cu, eax);
    g->edx = edx;
    g->esp = sp0 - 0x1230u;
    t14 = cow_thiscall_cdecl(g, COW_IMG(0x10315210u), ecx, 3, eax, 0x2cu, rd32(sp0 - 0x1234u));
    t15 = g->edx;
    if (t14 == 0u)
    {
        ecx = 0x2cu;
        edx = t15;
        goto L_1031b600;
    }
    eax = t14;
    edx = t15;
    if (rd8(eax + 1u) == 0u)
    {
        ecx = eax + 1u;
        eax = eax + 1u;
        goto L_1031b5e5;
    }
    ecx = eax + 1u;
    eax = eax + 1u;
L_1031b5d7: ;
    if (rd8(ecx) != 0x3bu)
    {
        ecx = ecx + 1u;
    }
    else
    {
        wr8(ecx, 0u);
    }
    if (rd8(ecx) != 0u) goto L_1031b5d7;
L_1031b5e5: ;
    wr32(sp0 - 0x1238u, 0xau);
    wr32(sp0 - 0x123cu, 0u);
    wr32(sp0 - 0x1240u, eax);
    g->ebx = 0u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1224u;
    t16 = cow_thiscall_cdecl(g, COW_IMG(0x10313979u), ecx, 7, eax, 0u, 0xau, rd32(sp0 - 0x1234u), rd32(sp0 - 0x1230u), rd32(sp0 - 0x122cu), rd32(sp0 - 0x1228u));
    t17 = g->ecx;
    t18 = g->edx;
    if (t16 == 2u)
    {
        eax = t16;
        goto L_1031b613;
    }
    eax = t16;
    ecx = t17;
    edx = t18;
    if (eax == 3u) goto L_1031b613;
    if (eax == 1u) goto L_1031b613;
L_1031b600: ;
    wr32(sp0 - 0x1238u, sp0 - 8u);
    g->eax = sp0 - 8u;
    g->esp = sp0 - 0x122cu;
    t19 = cow_call_regs(g, COW_IMG(0x1031b4a1u), g->eax, ecx, edx, 1, 3, sp0 - 8u, rd32(sp0 - 0x1234u), rd32(sp0 - 0x1230u));
    eax = -(rd8(sp0 - 8u) < 6u) + 3u;
    goto L_1031b613;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1031b4ce(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1031b4ce(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
