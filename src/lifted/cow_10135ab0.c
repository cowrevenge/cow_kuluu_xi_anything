/* f_0x10135ab0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10135ab0(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t of;
    uint32_t pf;
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
    uint32_t t2;
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
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self + 0x1cu) != 2u)
    {
        eax = rd32(self + 0x1cu);
        goto L_10135b13;
    }
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_stdcall(g, COW_IMG(0x10131680u), 1, arg1);
    t2 = g->edx;
    if ((int16_t)t1 < 0)
    {
        eax = t1;
        edx = t2;
    }
    else
    {
        eax = t1;
        ecx = (uint32_t)(int16_t)t1;
        edx = t2;
        if ((int32_t)ecx < 16)
        {
            cf = ecx < 0x10u;
            pf = PARITY((uint8_t)(ecx - 0x10u));
            zf = ecx == 0x10u;
            sf = (int32_t)(ecx - 0x10u) < 0;
            of = ((ecx ^ 0x10u) & (ecx ^ ecx - 0x10u)) >> 0x1fu;
            t3 = 1u << (ecx & 0x1fu);
            t4 = (ecx & 0xffffff00u) | rd8(ecx * 4u + self + 0x78u) >> 2u;
            g->eax = rd32(COW_IMG(0x10663740u));
            g->ecx = t4;
            g->edx = rd32(COW_IMG(0x105781c8u));
            t5 = rd32(COW_IMG(0x10663740u));
            t6 = rd32(COW_IMG(0x105781c8u));
            g->esp = sp0 - 0xcu;
            t7 = cow_cdecl(g, COW_IMG(0x101356c0u), 3, t4, t5, t6);
            t8 = g->ecx;
            t9 = g->edx;
            g->edx = t9;
            t10 = cow_cdecl(g, COW_IMG(0x10134f00u), 5, t3, 2u, t4, t5, t6);
            t11 = g->edx;
            eax = t10;
            edx = t11;
        }
    }
    t12 = rd32(COW_IMG(0x10663740u));
    wr16(t12 + 0x1eu, 0u);
    g->edi = self;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x101f66b0u), eax, t12, edx, 1, 0);
L_10135b77: ;
    t18 = rd32(rd32(COW_IMG(0x10663740u)) + 8u);
    g->esp = sp0 - 4u;
    cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), rd32(COW_IMG(0x10663740u)), 2, t18, 0u);
L_10135b8d: ;
    g->edi = in_edi;
    return;
L_10135b13: ;
    if (eax != 1u) goto L_10135b8d;
    if (rd8(rd32(COW_IMG(0x105781c8u)) + 4u) == 0u)
    {
        edx = in_edx;
        goto L_10135b4b;
    }
    eax = (eax & 0xffffff00u) | rd8(rd32(COW_IMG(0x105781c8u)) + 4u);
    ecx = rd32(COW_IMG(0x105781c8u));
    if (rd8(ecx + 5u) != 0xfeu) goto L_10135b31;
    edx = in_edx;
    loc_8 = 2u;
    loc_c = 0u;
L_10135b50: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t13 = cow_thiscall(g, COW_IMG(0x10135f00u), self, 2, loc_c, loc_8);
    t14 = g->ecx;
    t15 = g->edx;
    if ((uint8_t)t13 != 0u)
    {
        eax = t13;
        edx = t15;
    }
    else
    {
        eax = t13;
        ecx = t14;
        edx = t15;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t16 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
        t17 = g->edx;
        eax = t16;
        edx = t17;
    }
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x101316a0u), self, 3, 0u, 0u, 0u);
    wr8(rd32(COW_IMG(0x105781c8u)) + 4u, 0u);
    goto L_10135b77;
L_10135b31: ;
    if ((uint8_t)eax == 0u)
    {
        edx = in_edx;
        goto L_10135b4b;
    }
    if (rd8(ecx + 5u) != 0u)
    {
        edx = (in_edx & 0xffffff00u) | rd8(ecx + 5u);
        goto L_10135b42;
    }
    edx = (in_edx & 0xffffff00u) | rd8(ecx + 5u);
    loc_8 = 0u;
    loc_c = 0u;
    goto L_10135b50;
L_10135b42: ;
    if ((uint8_t)eax == 0u) goto L_10135b4b;
    eax = rd32(ecx + 8u);
L_10135b4d: ;
    loc_8 = 1u;
    loc_c = eax;
    goto L_10135b50;
L_10135b4b: ;
    eax = 0u;
    goto L_10135b4d;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10135ab0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10135ab0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
