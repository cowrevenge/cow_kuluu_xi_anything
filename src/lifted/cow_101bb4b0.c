/* f_0x101bb4b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_101bb4b0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_4;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->esp = sp0 - 0x20u;
    t1 = cow_call_regs(g, COW_IMG(0x10153ff0u), in_eax, self, in_edx, 1, 0);
    t2 = g->edx;
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x101549e0u), t1, 0);
    t4 = g->ecx;
    t5 = g->edx;
    if ((int32_t)t3 > 0)
    {
        ecx = t4;
        edx = t5;
        loc_c = t1;
        loc_4 = t3;
        esi = 0u;
        edi = 0u;
        loc_10 = 0u;
L_101bb4f3: ;
        if ((int32_t)esi >= (int32_t)arg2) goto L_101bb582;
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        t6 = cow_thiscall_cdecl(g, COW_IMG(0x1022aff0u), ecx, 1, edi);
        t7 = g->ecx;
        t8 = g->edx;
        if ((uint8_t)t6 == 0u)
        {
            ecx = t7;
            edx = t8;
            goto L_101bb575;
        }
        edx = t8;
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        t9 = cow_thiscall(g, COW_IMG(0x101549f0u), loc_c, 1, edi);
        t10 = g->ecx;
        t11 = g->edx;
        if ((uint16_t)t9 < 0x181u)
        {
            eax = t9;
            ecx = t10;
            edx = t11;
            goto L_101bb520;
        }
        eax = t9;
        ecx = t10;
        edx = t11;
        if ((uint16_t)eax <= 0x183u) goto L_101bb582;
L_101bb520: ;
        if ((uint16_t)eax != 0u)
        {
            ecx = (ecx & 0xffffff00u) | (uint8_t)arg3;
            if ((uint8_t)(eax >> 8u) != 0u) goto L_101bb58c;
            ecx = (ecx & 0xffffff00u) | (uint8_t)((uint8_t)ecx + 2u);
            edx = (edx & 0xffffff00u) | (uint8_t)(edx | 0xffu);
L_101bb53b: ;
        }
        else
        {
            ecx = (ecx & 0xffffff00u) | (uint8_t)arg3;
            eax = (eax & 0xffffff00u) | (uint8_t)(eax | 0xffu);
            ecx = (ecx & 0xffffff00u) | (uint8_t)((uint8_t)ecx + 1u);
            edx = (edx & 0xffffff00u) | (uint8_t)(edx | 0xffu);
        }
L_101bb53f: ;
        t12 = (((((ecx & 0xff00ffffu) | edx << 0x10u) & 0xffffffu) | eax << 0x18u) & 0xffff00ffu) | rd8(self + 4u) << 8u;
        t13 = rd8(self + 4u);
        wr32(arg1 + esi, t12);
        g->edx = t12;
        g->esp = sp0 - 0x20u;
        t14 = cow_thiscall(g, COW_IMG(0x10154550u), loc_c, 1, edi);
        t15 = g->ecx;
        t16 = g->edx;
        wr32(arg1 + esi + 4u, t14);
        esi = esi + 8u;
        loc_10 = (((((ecx & 0xff00ffffu) | edx << 0x10u) & 0xffffffu) | eax << 0x18u) & 0xffff00ffu) | t13 << 8u;
        ecx = t15;
        edx = t16;
L_101bb575: ;
        if ((int32_t)(edi + 1u) < (int32_t)loc_4)
        {
            edi = edi + 1u;
            goto L_101bb4f3;
        }
    }
L_101bb582: ;
    return;
L_101bb58c: ;
    if ((uint8_t)eax != 0u)
    {
        edx = (uint8_t)(eax >> 8u);
        goto L_101bb53b;
    }
    edx = (uint8_t)(eax >> 8u);
    eax = (eax & 0xffffff00u) | (uint8_t)(eax | 0xffu);
    ecx = (ecx & 0xffffff00u) | (uint8_t)((uint8_t)ecx + 3u);
    goto L_101bb53f;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101bb4b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101bb4b0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
